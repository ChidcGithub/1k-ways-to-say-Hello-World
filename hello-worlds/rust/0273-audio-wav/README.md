---
id: 0273
language: rust
paradigm: procedural
output: audio
platform: cli
era: modern
tags: []
notes: "Generates a WAV file with a 440 Hz sine wave tone."
author: ChidcGithub
date: 2026-07-21
---

# #0273 · Rust Audio (WAV)

## Description

Writes a one-second WAV file (`hello.wav`) with a standard PCM header and a 440 Hz (A4) sine wave tone. The 44-byte header (RIFF/WAVE/fmt /data chunks) is written via `write_all` using little-endian byte arrays produced by `to_le_bytes()`: 8000 Hz mono, 16-bit samples. The data section is filled with `i16` samples computed from `32767 * sin(2π * 440 * t)`, producing an audible A4 tone. Any audio player will recognize the file as valid WAV. This mirrors the C `0223-audio-wav` entry but adds an audible tone rather than silent samples, and uses Rust's `to_le_bytes` for portable endianness handling.

## Source Code

`main.rs`:

```rust
use std::fs::File;
use std::io::Write;

fn main() {
    let sample_rate: u32 = 8000;
    let num_samples: u32 = sample_rate;
    let frequency: f32 = 440.0;
    let mut f = File::create("hello.wav").expect("create failed");

    let data_size: u32 = num_samples * 2;
    let chunk_size: u32 = 36 + data_size;
    f.write_all(b"RIFF").unwrap();
    f.write_all(&chunk_size.to_le_bytes()).unwrap();
    f.write_all(b"WAVE").unwrap();
    f.write_all(b"fmt ").unwrap();
    let fmt_size: u32 = 16;
    f.write_all(&fmt_size.to_le_bytes()).unwrap();
    let audio_fmt: u16 = 1;
    f.write_all(&audio_fmt.to_le_bytes()).unwrap();
    let num_channels: u16 = 1;
    f.write_all(&num_channels.to_le_bytes()).unwrap();
    f.write_all(&sample_rate.to_le_bytes()).unwrap();
    let byte_rate: u32 = sample_rate * 2;
    f.write_all(&byte_rate.to_le_bytes()).unwrap();
    let block_align: u16 = 2;
    f.write_all(&block_align.to_le_bytes()).unwrap();
    let bits_per_sample: u16 = 16;
    f.write_all(&bits_per_sample.to_le_bytes()).unwrap();
    f.write_all(b"data").unwrap();
    f.write_all(&data_size.to_le_bytes()).unwrap();

    for i in 0..num_samples {
        let t = i as f32 / sample_rate as f32;
        let sample = (32767.0 * (2.0 * std::f32::consts::PI * frequency * t).sin()) as i16;
        f.write_all(&sample.to_le_bytes()).unwrap();
    }
}
```

## Run

```bash
cd hello-worlds/rust/0273-audio-wav
rustc main.rs -o hello && ./hello
# play hello.wav in any audio player
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Sequential header writes followed by a sample loop |
| output | `audio` | Output is a WAV audio file |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No additional tags; audio output is the distinguishing trait |

## Reference

- WAVE File Format Specification (IBM/Microsoft, 1991) — RIFF/WAVE PCM structure.
- [std::f32::consts::PI — Rust std](https://doc.rust-lang.org/std/f32/consts/constant.PI.html)
