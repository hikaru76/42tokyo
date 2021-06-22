//ex00
int main(void)
{
	char *a = "aaa";
	char *b = "ab";
	char *c = "ab";
	char *d = "a";
	char *e = "cdd";

	int f = ft_strcmp(a,b);
	int g = strcmp(a,b);
	int h = ft_strcmp(a,d);
	int i = strcmp(a,d);
	int j = ft_strcmp(a,e);
	int k = strcmp(a,e);
	int l = ft_strcmp(b,c);
	int m = strcmp(b,c);
	printf("%d %d %d %d %d %d %d %d", f, g, h, i, j, k, l, m);
}

//ex01
int main(void)
{
	char *a = "aaa";
	char *b = "ab";
	char *c = "ab";
	char *d = "a";
	char *e = "cdd";

	int f = ft_strncmp(a,b,0);
	int g = strncmp(a,b,0);
	int h = ft_strncmp(a,d,3);
	int i = strncmp(a,d,3);
	int j = ft_strncmp(a,e,3);
	int k = strncmp(a,e,3);
	int l = ft_strncmp(b,c,3);
	int m = strncmp(b,c,3);
	printf("%d %d %d %d %d %d %d %d", f, g, h, i, j, k, l, m);
}

int main(void)
{
	char *a = "aaa";
	char *b = "ab";
	char *c = "ab";
	char *d = "a";
	char *e = "cdd";

	int f = ft_strncmp(a,b,0);
	int h = ft_strncmp(a,d,3);
	int j = ft_strncmp(a,e,3);
	int l = ft_strncmp(b,c,3);
	printf("%d %d %d %d", f, h, j, l);
}


//ex02
int		main(void)
{
	char str1[30] = "ABC";
	char str2[30] = "123";
	char str3[30] = "123";
	char p[20] = "abcd";
	char q[20] = "abcd";

	strcat(str2, str1);
	ft_strcat(str3, str1);
	strcat(p, str1);
	ft_strcat(q, str1);

	printf("%s %s %s %s", str2, str3, p, q);
}

int		main(void)
{
	char str1[100] = "ABCaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char str2[100] = "123";
	char str3[100] = "123";
	char p[120] = "abcd";
	char q[120] = "abcd";

	strcat(str2, str1);
	ft_strcat(str3, str1);
	strcat(p, str1);
	ft_strcat(q, str1);

	printf("%s %s %s %s", str2, str3, p, q);
}

//ex03
int		main(void)
{
	char str1[30] = "ABC";
	char str2[30] = "123";
	char str3[30] = "123";
	char p[20] = "abcd";
	char q[20] = "abcd";

	strncat(str2, str1, 2);
	ft_strncat(str3, str1, 2);
	strncat(p, str1, 5);
	ft_strncat(q, str1, 5);

	printf("%s %s %s %s", str2, str3, p, q);
}

int		main(void)
{
	char str1[30] = "ABC";
	char str2[30] = "123";
	char p[20] = "abcd";

	ft_strncat(str2, str1, 2);
	ft_strncat(p, str1, 5);

	printf("%s %s", str2, p);
}

int		main(void)
{
	char str1[30] = "ABC";
	char str2[30] = "123aaaaaaa";
	char str3[30] = "123aaaaaaa";
	char p[20] = "abcd";
	char q[20] = "abcd";

	strncat(str2, str1, 6);
	ft_strncat(str3, str1, 6);
	strncat(p, str1, 5);
	ft_strncat(q, str1, 5);

	printf("%s %s %s %s", str2, str3, p, q);
}

//ex04
int		main(void)
{
	char	s1[] = "abcdefghijklmn";        /* 検索対象文字列 */
	char	s2[] = "defgh";                 /* 一致する場合 */
	char	s3[] = "xyz";                   /* 一致しない場合 */
	char	s4[] = "abcdefghijklmnopqr";    /* 検索対象文字列より長い場合 */
	char	s5[] = "";                      /* \0 */
	char	*sp;

	sp = strstr(s1,s2);
	printf("一致する場合 : %s\n",sp);
	sp = strstr(s1,s3);
	printf("一致しない場合 : %s\n",sp);
	sp = strstr(s1,s4);
	printf("検索対象文字列より長い場合 : %s\n",sp);
	sp = strstr(s1,s5);
	printf("\\0 : %s\n",sp);

	sp = ft_strstr(s1,s2);
	printf("一致する場合 : %s\n",sp);
	sp = ft_strstr(s1,s3);
	printf("一致しない場合 : %s\n",sp);
	sp = ft_strstr(s1,s4);
	printf("検索対象文字列より長い場合 : %s\n",sp);
	sp = ft_strstr(s1,s5);
	printf("\\0 : %s\n",sp);
}

int		main(void)
{
	char *c;
	//char a[] = "abcdefghi";
    //char b[] = "abi";

    //char a[] = "abcdefghi";
    //char b[] = "cd";

    //char a[] = "abcdefghi";
    //char b[] = "asa";

    //char a[] = "abcdefghi";
    //char b[] = "i";

    //char a[] = "abcdefghi";
    //char b[] = "iy";

    //char a[] = "abcdefghi";
    //char b[] = "";

    //char a[] = "";
    //char b[] = "afghj";

    //char a[] = "";
    //char b[] = "";

    //char a[] = "abcdefghiab12345678";
    //char b[] = "ab1";

    char a[] = "abcdefghiab12345678";
    char b[] = "g";

    c = ft_strstr(a,b);
    printf("%s\n", c);
    c = strstr(a,b);
    printf("%s\n", c);
}

//ex05
int		main(void)
{
	char *a = "fdsaf";
	char *b = "fdsaf";
	char *c = " ";
	char *d = " ";
	char *e = "";
	char *f = "";
	char *g = "aaa";
	char *h = "aaa";
	int n = strlcat(a, c, 2);
	int m = ft_strlcat(b, d, 2);
	printf("%d %d %s %s", n, m, g, h); 
}