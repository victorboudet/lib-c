/*
** EPITECH PROJECT, 2022
** sdf
** File description:
** sdf
*/

char *my_strupcase(char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] > 96 && str[a] < 123)
            str[a] = str[a] - 32;
    }
    return str;
}
