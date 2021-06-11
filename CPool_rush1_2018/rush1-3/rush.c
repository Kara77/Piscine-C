/*
** EPITECH PROJECT, 2018
** rush1-3
** File description:
** Display 
*/
#include <unistd.h>

void my_putchar(char c);

void make_line_special_case(int x, int y)
{
    if ((y == 1) && (x == 1)) {
        my_putchar('B');
        my_putchar(10);
    } else if ((y == 1) && (x > 1)) {
        for (int i = 0; i<x; i++) {
            my_putchar('B');
        }
        my_putchar(10);
    } else {
        for (int i = 0; i<y; i++) {
            my_putchar('B');
            my_putchar(10);
        }
    }
}

void make_line(int i, int j, int x, int y)
{
    if (i == 0) {
        if (j == 0 || j == x - 1) {
            my_putchar('A');
        } else {
            my_putchar('B');
        }
    } else if (i == y - 1) {
        if (j == 0 || j == x - 1) {
            my_putchar('C');
        } else {
            my_putchar('B');
        }
    } else {
        if (j == 0 || j == x - 1) {
            my_putchar('B');
        } else {
            my_putchar(' ');
        }
    }
}

void make_rush(int x, int y)
{
    int i = 0;
    while (i < y) {
        for(int j = 0; j < x; j++) {
            make_line(i, j, x, y);
        }
        my_putchar(10);
        i++;
    }
}

void rush(int x, int y)
{
    int max = 2147483647;
    if ((x > 0 && x <= max) && (y > 0 && y <= max)) {
        if ((y == 1) || (x == 1)) {
            make_line_special_case(x, y);
        } else {
            make_rush(x, y);
        }
    } else {
        write(2, "Invalid size\n", 13);
    }
}
