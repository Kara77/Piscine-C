/*
** EPITECH PROJECT, 2018
** rush1-1
** File description:
** assig1
*/

#include <unistd.h>
void my_putchar(char c);

void make_line(int i, int j, int x, int y)
{
    if ((i == 0) || (i == y - 1)) {
        if ((j == 0) || (j == x - 1)) {
            my_putchar('o');
        } else {
            my_putchar('-');
        }
    } else {
        if (j == 0 || j == x - 1) {
            my_putchar('|');
        } else {
            my_putchar(' ');
        }
    }
}

int is_valid(int x, int y)
{
    int max = 2147483647;
    int res;
    if (((x > 0) && (x <= max)) && ((y > 0) && (y <= max))) {
        res = 1;
    } else {
        res = 0;
    }
    return (res);
}

void rush(int x, int y)
{
    int valid = is_valid(x, y);
    int i = 0;
    while ((i < y) && (valid != 0)) {
        for(int j = 0; j < x; j++) {
        make_line(i, j, x, y);
        }
        my_putchar(10);
        i++;
    }
    if (valid == 0)
        write(2, "Invalid size\n", 13);
}
