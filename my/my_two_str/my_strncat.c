/*
** project lib, 11/2022
** strncat
** File description:
** concatenate n first characters of seconde in first string
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int a;
    int c;
    a = my_strlen(dest);
    c = my_strlen(src);
    for (int b = 0; b != c && b != nb; b++) {
        dest[a] = src[b];
        a++;
    }
    dest[a] = '\0';
    return dest;
}
