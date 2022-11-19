/*
** lib project, 11/2022
** power_rec
** File description:
** make a power
*/

int my_power_rec(int nb, int power)
{
    if (power == 0)
        return 1;
    return (nb * my_power_rec(nb, power - 1));
}
