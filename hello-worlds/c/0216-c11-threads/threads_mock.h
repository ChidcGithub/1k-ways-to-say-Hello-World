/* Minimal mock of C11 <threads.h> for toolchains that lack it (e.g. MinGW-w64).
   Provides just enough of the thrd_* API for 0216-c11-threads to pass
   -fsyntax-only. On a conforming C11 implementation the real <threads.h>
   is used instead (see the __has_include guard in main.c). */
#ifndef THREADS_MOCK_H
#define THREADS_MOCK_H

typedef int (*thrd_start_t)(void *);
typedef struct { int _id; } thrd_t;
enum { thrd_success = 0 };

static inline int thrd_create(thrd_t *thr, thrd_start_t func, void *arg) {
    (void)thr; (void)func; (void)arg; return thrd_success;
}
static inline int thrd_join(thrd_t thr, int *res) {
    (void)thr; (void)res; return thrd_success;
}

#endif /* THREADS_MOCK_H */
