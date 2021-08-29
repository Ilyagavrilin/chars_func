#include "chars_func.h"



int main() {

    return 0;
}


int puts(const char *out) {
    int i = 0;
    while (out[i] != '\0') {
        if (putchar(out[i]) == EOF) {
            return EOF;
        }
        i++;
    }
    putchar('\n');
    return 1;
}

size_t strlen(const char *str) {
    size_t cont = 0;
    while (str[cont] != '\0') {
        cont++;
    }
    return cont;
}

char strchr(const char *str, int ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return str[i];
        }
        i++;
    }
    return NULL;
}

char *strcpy(char *dst, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    return dst;
}

char *strncpy(char *dst, const char *src, size_t len) {
    size_t i = 0;
    while (src[i] != '\0') {
        if (i > len) {
            break;
        }
        dst[i] = src[i];
        i++;
    }
    return dst;
}

char *strcat(char *str1, const char *str2) {
    size_t len1 = strlen(str1);
    for (size_t k = 0; k < strlen(str2); k++) {
        str1[len1 + k] = str2[k];
    }
    if (str1[len1 + strlen(str2)] != '\0') {
        str1[len1 + strlen(str2)] = '\0';
    }
    return str1;
}

