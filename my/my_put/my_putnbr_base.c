/*
** lib project, 11/2022
** put nbr base
** File description:
** Put a number with a given base in str
*/

#include "my.h"

void my_putnbr_base(int nb, char *base)
{
    int len = strlen(base);
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb <= len) {
        my_putchar(base[nb]);
        return;
    } else {
        my_putnbr_base(nb / len, base);
        my_putchar(base[nb % len]);
    }
}