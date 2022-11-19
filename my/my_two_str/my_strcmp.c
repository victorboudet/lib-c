/*
** project lib, 11/2022
** str cmp
** File description:
** compare two strings
*/

int my_strcmp(char const *s1, char const *s2)
{
    int a;
    for (a = 0; s1[a] == s2[a]; a++) {
        if (s1[a] == '\0' && s2[a] == '\0')
            return 0;
    }
    if (s1[a] > s2[a])
        return 1;
    if (s1[a] < s2[a])
        return -1;
}
