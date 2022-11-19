/*
** EPITECH PROJECT, 2022
** putstr
** File description:
** display characters of a str
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        my_putchar(str[a]);
    }
    return 0;
}
