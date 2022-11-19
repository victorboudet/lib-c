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
#include <stdlib.h>


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
int my_putstr(char const *str);

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
char *my_strcapitalize(char *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);

// my_two_int
void my_swap(int *a, int *b);

// my two str
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);

#endif
