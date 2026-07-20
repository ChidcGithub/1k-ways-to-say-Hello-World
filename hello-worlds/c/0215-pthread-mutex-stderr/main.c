#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <pthread.h>
static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
void *greet(void *arg) { (void)arg; pthread_mutex_lock(&mutex); fprintf(stderr, "Hello, World!\n"); pthread_mutex_unlock(&mutex); return NULL; }
int main(void) {
    pthread_t t;
    pthread_create(&t, NULL, greet, NULL);
    pthread_join(t, NULL);
    return 0;
}
