//ex00
int main (void)
{
    int a = ft_strlen("abcde");
    printf("%d", a);
    return (0);
}

//ex01


//ex03
int main (void)
{
    printf("123456\n");
    printf("ft_atoi: %d\n", ft_atoi("123456"));
    printf("atoi   : %d\n", atoi("123456"));
    printf("12Three45678\n");
    printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
    printf("atoi   : %d\n", atoi("12Three45678"));
    printf("Hello World!\n");
    printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
    printf("atoi   : %d\n", atoi("Hello World!"));
    printf("+42 BLAH!\n");
    printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
    printf("atoi   : %d\n", atoi("+42 BLAH!"));
    printf("-42\n");
    printf("ft_atoi: %d\n", ft_atoi("-42"));
    printf("atoi   : %d\n", atoi("-42"));
    printf("-+42\n");
    printf("ft_atoi: %d\n", ft_atoi("-+42"));
    printf("atoi   : %d\n", atoi("-+42"));
    printf("+-42\n");
    printf("ft_atoi: %d\n", ft_atoi("+-42"));
    printf("atoi   : %d\n", atoi("+-42"));
    printf("     +42\n");
    printf("ft_atoi: %d\n", ft_atoi("     +42"));
    printf("atoi   : %d\n", atoi("     +42"));
    printf("\t\n\v\f\r 42\n");
    printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
    printf("atoi   : %d\n", atoi("\t\n\v\f\r 42"));
    printf("00042\n");
    printf("ft_atoi: %d\n", ft_atoi("00042"));
    printf("atoi   : %d\n", atoi("00042"));
    printf("-2147483648\n");
    printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
    printf("atoi   : %d\n", atoi("-2147483648"));
    printf("2147483647\n");
    printf("ft_atoi: %d\n", ft_atoi("2147483647"));
    printf("atoi   : %d\n", atoi("2147483647"));
    printf("   --------1234ab567\n");
    printf("ft_atoi: %d\n", ft_atoi("   --------1234ab567"));
    printf("atoi    : %d\n", atoi("   --------1234ab567"));
    return 0;
}

//ex04
int		main(void)
{
	ft_putnbr_base(0, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-100, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(100, "0123456789abcdef");
	write(1, "\n", 1);
	return (0);
}

//ex05
int		main(void)
{
	ft_atoi_base("DCBA", "ABCD");
	return (0);
}