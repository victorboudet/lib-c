/*
** EPITECH PROJECT, 2022
** homelib
** File description:
** lib make
*/

#ifndef libmy_h
    #define libmy_h

#include <stdio.h>
#include <unistd.h>

// my_display
int my_showstr(char const *str);

// my math
int my_power_rec(int nb, int power);
int my_sqrt_whole(int nb);

// my put
int my_put_nbr(int nb);
void my_putchar(char c);
void my_putnbr_base(int nb, char *base);
void my_putnbr_basint(int nb, int b);
int my_putstr(char const *str)

// my str check
int my_isneg(int n);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);

// my str edit
char *my_revstr(char *str);

#endif
