#include <stdio.h>

/* C11 <threads.h> is not provided by all toolchains (e.g. MinGW-w64).
   Fall back to a local mock when the header is absent. */
#if defined(__has_include) && __has_include(<threads.h>)
  #include <threads.h>
#else
  #include "threads_mock.h"
#endif

int greet(void *arg) { (void)arg; printf("Hello, World!\n"); return 0; }
int main(void) {
    thrd_t t;
    thrd_create(&t, greet, NULL);
    thrd_join(t, NULL);
    return 0;
}
