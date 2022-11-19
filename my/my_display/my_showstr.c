/*
** lib project, 11/2022
** my_showstr
** File description:
** Display str character and non printable in base 16
*/

#include "my.h"

int my_showstr(char const *str)
{
    for (int a; str[a] != '\0'; a++) {
        if (str[a] > 31 && str[a] < 127) {
            my_putchar(str[a]);
        } else {
            my_putchar(92);
            my_putnbr_basint(str[a], 16);
        }
    }   
}
