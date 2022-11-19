/*
** lib project, 11/2022
** Sqrt whole
** File description:
** make the sqrt for whole result
*/

#include "my.h"

int my_sqrt_whole(int nb)
{
    if (nb < 1) {
        return 0;
    }
    int i = nb;
    while (i * i > nb) {
        i--;
    }
    if (i * i == nb)
        return i;
    return 0;
}
