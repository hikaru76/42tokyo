#include "get_next_line.h"

size_t  ft_strlen(const char *str)
{
	size_t  n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char    *ft_strnullfill(char *s)
{
	size_t	i;
	size_t	slen;

	if (!s)
		return (s);
	i = -1;
	slen = ft_strlen(s);
	while (++i < slen)
		s[i] = '\0';
	free(s);
	return (s);
}

char    *ft_strncat(char *dest, char *src, size_t nb)
{
	size_t a;
	size_t b;
	size_t i;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	i = 0;
	while (i < b && i < nb)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (dest);
}

char    *ft_strdup(char *src)
{
	int             src_len;
	char    *str;
	int             i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	str = (char *)malloc(sizeof(*str) * (src_len + 1));
	i = -1;
	if (!str)
		return (0);
	else
	{
		while (++i < src_len)
			str[i] = src[i];
		str[i] = '\0';
		return (str);
	}
}


#include <unistd.h>
void    ft_putstr(char *s)
{
	int     i;

	if (s)
	{
		i = 0;
		while (s[i])
			i++;
		write(1, s, i);
	}
}

static void     write_num(int nb)
{
	char    c;

	c = (int) '0' + nb;
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		write_num(nb);
}