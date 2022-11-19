/*
** EPITECH PROJECT, 2022
** str
** File description:
** sdsd
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = my_strlen(src);
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    if (n > a) {
        dest[n] = '\0';
}
    return dest;
}
