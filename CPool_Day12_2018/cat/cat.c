/*
** EPITECH PROJECT, 2018
** cat
** File description:
** task01day12
*/

#include "../include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int deal_errors(char argv[])
{   
    switch (errno) {
        case ENOENT:
            my_putstr("cat: ");
            my_putstr(argv);
            my_putstr(": No such file or directory\n");
            break;
        case EACCES:
            my_putstr("cat: ");
            my_putstr(argv);
            my_putstr(": Permission denied\n");
            break;
        case EISDIR:
            my_putstr("cat: ");
            my_putstr(argv);
            my_putstr(": Is a directory\n");
            break;
        }
        errno = 0;
}

int my_cat(int argc, char **argv)
{
    int fd;
    int i = 1;
    int size = 1;
    char buff[30 * 1024];

    while (argc == 1) {
        read(0, buff, 1);
        my_putstr(buff);
    }
    while (i < argc) {
        fd = open(argv[i], O_RDONLY);
        deal_errors(argv[i]);
        size = read(fd, buff, (30 * 1024));
        if (fd == -1 || size == -1)
            deal_errors(argv[i]);
        my_putstr(buff);
        close(fd);
        i++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    my_cat(argc, argv);
    return (0);
}