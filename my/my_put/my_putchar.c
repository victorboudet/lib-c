/*
** lib project, 11/2022
** my_putchar
** File description:
** put a character
*/

#include <my.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
