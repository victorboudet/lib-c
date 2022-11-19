/*
** lib project, 11/2022
** str upper
** File description:
** check if the str is with upper alhpa character only
*/

int my_str_isupper(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] < 65 || str[a] > 90)
            return 0;
    }
    return 1;
}
