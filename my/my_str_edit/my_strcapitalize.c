/*
** EPITECH PROJECT, 2022
** df
** File description:
** df
*/

#include "my.h"
#include "stdlib.h"
#include "stdio.h"
int checknum(char c);
int checkal(char c, int a);
int verif(int a, char *str);
char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    if (checkal(str[0], 1))
        str[0] -= 32;
    for (int a = 1; str[a] != '\0'; a++) {
        if (verif(a, str))
            str[a] -= 32;
    }
    return str;
}

int verif(int a, char *str)
{
    if (checkal(str[a], 1) && !(checknum(str[a - 1]))) {
        if (!checkal(str[a - 1], 0) && !checkal(str[a - 1], 1))
            return 1;
    }
    return 0;
}

int checkal(char c, int a)
{
    if (a == 1) {
        if (c > 96 && c < 123)
            return 1;
    return 0;
    } else {
        if (c <= 'Z' && c >= 'A')
            return 1;
        return 0;
    }
}

int checknum(char c)
{
    if (c > 47 && c < 58)
        return 1;
    return 0;
}
