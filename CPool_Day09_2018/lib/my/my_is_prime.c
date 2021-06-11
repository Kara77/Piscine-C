/*
** EPITECH PROJECT, 2018
** task06day05
** File description:
** prime
*/

int my_is_prime(int nb)
{ 
    if (nb == 1 || nb <= 0) {
        return (0);
    } else if (nb == 2) {
        return (1);
    }
    for (int i = 2; i <= nb - 1; i++) {
        if (nb % i == 0) {
            return (0);
        } else {
            return (1);
        }
    }
}