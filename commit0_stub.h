#ifndef COMMIT0_STUB_H
#define COMMIT0_STUB_H
#include <stdio.h>
#include <stdlib.h>
#define STUB_PANIC(name) do { \
    fprintf(stderr, "STUB: %s called in %s:%d\n", (name), __FILE__, __LINE__); \
    abort(); \
} while (0)
#endif
