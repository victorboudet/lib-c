/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    if (src[0] == '\0') {
        dest = "";
        return dest;
    }
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
