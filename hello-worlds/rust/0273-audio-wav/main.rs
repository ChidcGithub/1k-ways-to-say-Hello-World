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
