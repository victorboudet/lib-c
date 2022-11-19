/*
** lib project, 11/2022
** str is num
** File description:
** check if a string is in numeric char only
*/

int my_str_isnum(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] < 48 || str[a] > 57)
            return 0;
    }
    return 1;
}
