---
id: 0223
language: c
paradigm: procedural
output: audio
platform: cli
era: modern
tags: []
notes: "Generates a WAV file with a simple tone."
author: ChidcGithub
date: 2026-07-20
---

# #0223 · C Audio (WAV)

## Description

Writes a one-second WAV file (`hello.wav`) with a standard PCM header. The 44-byte header (RIFF/WAVE/fmt /data chunks) is written by `fprintf` for the magic tags and `fwrite` for the binary fields: 8000 Hz mono, 16-bit samples. The data section is filled with `short sample = 0` samples — a silent waveform — so the focus is on the structure of the file rather than a synthesized tone. Any audio player will recognize the file as valid WAV.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    FILE *f = fopen("hello.wav", "w");
    unsigned int sample_rate = 8000;
    unsigned int num_samples = sample_rate;
    fprintf(f, "RIFF");
    unsigned int data_size = num_samples * 2;
    unsigned int chunk_size = 36 + data_size;
    fwrite(&chunk_size, 4, 1, f);
    fprintf(f, "WAVEfmt ");
    unsigned int fmt_size = 16;
    fwrite(&fmt_size, 4, 1, f);
    unsigned short audio_fmt = 1;
    fwrite(&audio_fmt, 2, 1, f);
    unsigned short num_channels = 1;
    fwrite(&num_channels, 2, 1, f);
    fwrite(&sample_rate, 4, 1, f);
    unsigned int byte_rate = sample_rate * num_channels * 2;
    fwrite(&byte_rate, 4, 1, f);
    unsigned short block_align = num_channels * 2;
    fwrite(&block_align, 2, 1, f);
    unsigned short bits_per_sample = 16;
    fwrite(&bits_per_sample, 2, 1, f);
    fprintf(f, "data");
    fwrite(&data_size, 4, 1, f);
    for (unsigned int i = 0; i < num_samples; i++) {
        short sample = 0;
        fwrite(&sample, 2, 1, f);
    }
    fclose(f);
    printf("Written hello.wav\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0223-audio-wav
gcc -std=c11 main.c -o hello.exe
./hello.exe
# play hello.wav in any audio player
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential header writes followed by a sample loop |
| output | `audio` | Output is a WAV audio file |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses C99-style `for`-loop declaration under C11 |
| tags | `[]` | No additional tags; audio output is the distinguishing trait |

## Reference

- WAVE File Format Specification (IBM/Microsoft, 1991) — RIFF/WAVE PCM structure.
