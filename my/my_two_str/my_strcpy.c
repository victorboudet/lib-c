/*
** project lib, 11/2022
** str cpy
** File description:
** cpy the second string in the first
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
