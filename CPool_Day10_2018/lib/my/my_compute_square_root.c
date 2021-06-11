/*
** EPITECH PROJECT, 2018
** task05day05
** File description:
** squareRoot
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int j = 0;

    if (nb == 1) {
        return (1);
    } else if (nb == 0) {
        return (0);
    }

    while (i != j || nb % i != 0) {
        i = i + 1;
        j = nb / i;
        if (nb % i !=0 && i > nb) {
            return (0);
        }
    }
    return (i);
}