#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <pthread.h>
void *greet(void *arg) { (void)arg; printf("Hello, World!\n"); return NULL; }
int main(void) {
    pthread_t t;
    pthread_create(&t, NULL, greet, NULL);
    pthread_join(t, NULL);
    return 0;
}
