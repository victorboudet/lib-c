/*
** lib project, 11/2022
** sd
** File description:
** sd
*/

#include "my.h"

char *my_revstr(char *str)
{
    int a = my_strlen(str);
    int i = 0;
    char conv[a];
    while (str[i] != '\0') {
        conv[i] = str[i];
        i++;
    }
    i = 0;
    while (a > 0) {
        str[i] = conv[a - 1];
        a--;
        i++;
    }
    return str;
}
