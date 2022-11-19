/*
** lib project, 11/2022
** str lower
** File description:
** check if string is in alpha lower character only
*/

int my_str_islower(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] < 97 || str[a] > 122)
            return 0;
    }
    return 1;
}
