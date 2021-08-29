#ifndef CHARS_FUNC_H_INCLUDED
#define CHARS_FUNC_H_INCLUDED

#include <stdio.h>

int puts(const char *out);
size_t strlen(const char *str);
char strchr(const char *str, int ch);
char *strcpy(char *dst, const char *src);
char *strncpy(char *dst, const char *src, size_t len);
char *strcat(char *str1, const char *str2);

#endif // CHARS_FUNC_H_INCLUDED
