//ex00
int		main(void)
{
	char *src = "abc";
	char *str = ft_strdup(src);
	return (0);
}

//ex01
int		main(void)
{
	int *b = ft_range(3, 10);
	return (0);
}

//ex02
int		main(void)
{
	int **i;
	printf("%d",ft_ultimate_range(i, 2, 6));
	return (0);
}

//ex03
int 	main(void)
{
	char *s[5] = {"abc", "def", "ghi", "jkl", "mno"};
	ft_strjoin(5, s, "zz");
	return (0);
}

//ex04
int		main(void)
{
	char *nbr = "    +++-+-EDABCAdgds";
	char *base_from = "ABCDE";
	char *base_to = "abcd";
	char *s = ft_convert_base(nbr, base_from, base_to);
	printf("%s", s);
	return (0);
}

//ex05
int		main(void)
{
	char *s = "abcdefghijklmnop";
	char **st = ft_split(s, "");
	printf("%s", st[0]);
	return (0);
}
