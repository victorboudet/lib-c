/*
** lib project, 11/2022
** my_strlen
** File description:
** string lenght
*/

int my_strlen(char const *str)
{
    int a;
    a = 0;
    while (str[a] != '\0') {
        a++;
    }
    return (a);
}
