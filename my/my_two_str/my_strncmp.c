/*
** EPITECH PROJECT, 2022
** sdf
** File description:
** sdf
*/
#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a;
    for (a = 0; s1[a] == s2[a] && a != n; a++) {
        if (s1[a] == '\0' && s2[a] == '\0')
            return 0;
    }
    if (s1[a] > s2[a])
        return 1;
    if (s1[a] < s2[a])
        return -1;
}
