/*
** EPITECH PROJECT, 2018
** Task01
** File description:
** swap addresses
*/

int my_putchar(char c);

int my_put_nbr(int nb)
{
    int power = 1;
    int size;

    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    if (nb < 10) {
        my_putchar(nb + '0');
        return (0);
    }

    while ((nb / power) >= 10) {
        power = power * 10;
    }
    my_putchar((nb / power) + '0');
    return (my_put_nbr(nb - (nb / power) * power));
}