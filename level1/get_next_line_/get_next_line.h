#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFFER_SIZE 5

size_t  ft_strlen(const char *str);
char    *ft_strnullfill(char *s);
char    *ft_strncat(char *dest, char *src, size_t nb);
char    *ft_strdup(char *src);

void    ft_putstr(char *s);
void    ft_putnbr(int nb);

#endif          