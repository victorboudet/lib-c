/*
** lib project, 11/2022
** put nbr base
** File description:
** Put a number with a given base in int
*/

#include "my.h"

char *makebase(int b, char *base)
{
    int a;
    for (a = 0; a != 10; a++) {
        base[a] = 48 + a;
        if (a == b - 1)
            return base;
    }
    for (int c = 0; a < b; a++) {
        base[a] = 97 + c;
        c++;
    }
    return base;
}

void my_putnbr_basint(int nb, int b)
{
    char base[b];
    makebase(b, base);
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb < b) {
        my_putchar(base[nb]);
        return;
    } else {
        my_putnbr_basint(nb / b, b);
        my_putchar(base[nb % b]);
    }
}
