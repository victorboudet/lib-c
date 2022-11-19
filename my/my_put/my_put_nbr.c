/*
** lib project, 11/2022
** putnbr
** File description:
** put a numbrr in base 10
*/

#include "my.h"

int my_put_nbr(int nb)
{
    char *base = "0123456789";
    int len = 10;
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb <= len) {
        my_putchar(base[nb]);
        return 0;
    } else {
        my_put_nbr(nb / len);
        my_putchar(base[nb % len]);
    }
    return 0;
}
