/*
** project lib, 11/2022
** lowcase
** File description:
** all capitalize letter become low 
*/

char *my_strlowcase(char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] > 64 && str[a] < 91)
            str[a] += 32;
    }
    return str;
}
