/*
** EPITECH PROJECT, 2022
** df
** File description:
** df
*/
int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int a;
    int c;
    a = my_strlen(dest);
    c = my_strlen(src);
    for (int b = 0; b != c; b++) {
        dest[a] = src[b];
        a++;
    }
    dest[a] = '\0';
    return dest;
}
