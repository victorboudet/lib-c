/*
** EPITECH PROJECT, 2022
** sd
** File description:
** sd
*/

char *my_strlowcase(char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] > 64 && str[a] < 91)
            str[a] += 32;
    }
    return str;
}
