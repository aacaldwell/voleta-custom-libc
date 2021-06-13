#ifndef VOLETA_LIBC_STDIO_H
#define VOLETA_LIBC_STDIO_H 1

#include <sys/cdefs.h>

#define EOF (-1)

#ifdef  __cplusplus
extern "C" {
#endif

int printf(const char *__restrict, ...);

int putchar(int);

int puts(const char *);

#ifdef  __cplusplus
}
#endif

#endif //VOLETA_LIBC_STDIO_H
