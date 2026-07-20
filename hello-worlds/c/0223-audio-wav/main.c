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
