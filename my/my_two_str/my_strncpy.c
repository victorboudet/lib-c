/*
** project lib, 11/2022
** strncpy
** File description:
** cpy the first n char of second str in the first
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = my_strlen(src);
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    if (n > a) {
        dest[n] = '\0';
}
    return dest;
}
