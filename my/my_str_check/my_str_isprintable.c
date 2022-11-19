/*
** lib project, 11/2022
** str printable
** File description:
** check if the str is with printable char only
*/

int my_str_isprintable(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] < 32 || str[a] > 126)
            return 0;
    }
    return 1;
}
