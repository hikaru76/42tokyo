//ex02
t_list	*new(void *data)
{
	t_list *n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n)
	{
		n->data = data;
		n->next = NULL;
	}
	return (n);
}

int main()
{
	t_list *p, *s, *j, *t;

	p = new("One");
	s = new("Two");
	j = new("Three");
	t = new("Four");
	p->next = s;
	s->next = j;
	j->next = t;
	printf("%d\n", ft_list_size(p));
	return 0;
}

//ex05
int		main(void)
{
	char *s[3] = {"abc", "def", "ghi"};
	t_list *list = ft_list_push_strs(3, s);
	printf("%s", list->data);
	return (0);
}

