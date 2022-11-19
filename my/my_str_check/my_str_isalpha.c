/*
** lib project, 11/2022
** Str alpha
** File description:
** check if string is in alphabetical char only
*/

int extendif(char const *str, int a)
{
    if (str[a] < 97 || str[a] > 122) {
        if (str[a] < 65 || str[a] > 90)
        return 1;
    }
    return 0;
}

int my_str_isalpha(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (extendif(str, a))
            return 0;
    }
    return 1;
}

