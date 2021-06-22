#include "get_next_line.h"
#include <stdio.h>

//\nの位置を返す（if分岐に入るのに不都合なので\nの位置+1の値を返す。利用する際は-1をする。）
int	gnl_get_enter(char *buf)
{
	int	i;

	if (!buf)
		return (0);
	i = -1;
	while (buf[++i])
		if (buf[i] == '\n')
			return (i + 1);
	return (0);
}
//ft_strncat, ft_strlenのNull検証,saveのNull検証
char	*gnl_read_join(int fd, char *save, int *flag)
{
	char	buf[BUFFER_SIZE + 1];
	char	*tmp;
	char	*rtn;
	int		txt;
	size_t	i;

	if (!save)
	{
		rtn = (char *)malloc(sizeof(char));
		if (!rtn)
		{
			*flag = -1;
			return (save);
		}
		rtn[0] = '\0';
	}
	else
		rtn = ft_strdup(save);
	if (!rtn)
	{
		*flag = -1;
		return (save);
	}
	while (1)
	{
		txt = read(fd, buf, BUFFER_SIZE);
		//printf("txt = %d, buf=%s\n", txt, buf);
		if (txt == -1)
		{
			*flag = -1;
			return (save);
		}
		buf[BUFFER_SIZE] = '\0';
		if (txt < BUFFER_SIZE)
			break ;
		tmp = ft_strdup(rtn);
		if (!tmp)
		{
			*flag = -1;
			return (save);
		}
		ft_strnullfill(rtn);
		rtn = (char *)malloc(sizeof(char) * (ft_strlen(tmp) + txt + 1));
		if (!rtn)
		{
			*flag = -1;
			return (save);
		}
		ft_strncat(rtn, tmp, ft_strlen(tmp));
		ft_strncat(rtn, buf, BUFFER_SIZE);
		ft_strnullfill(tmp);
		if (gnl_get_enter(rtn))
			break ;
	}
	if (txt == BUFFER_SIZE)
		*flag = 1;
	if (txt == 0 && save[0] != '\0')
	{
		rtn = (char *)malloc(sizeof(char) * (ft_strlen(save) + 1));
		if (!rtn)
		{
			*flag = -1;
			return (save);
		}
		ft_strncat(rtn, save, ft_strlen(save));
		i = ft_strlen(save);
		while (i-- > 0)
			save[i] = '\0';
	}
	return (rtn);
}

char	*gnl_get_from_save(char *save, char **line, int	*flag)
{
	int		len;
	int		i;

	len = gnl_get_enter(save) - 1;
	*line = (char *)malloc((len + 1) * sizeof(char));
	if (!(*line))
	{
		*flag = -1;
		return (save);
	}
	i = -1;
	while (++i < len)
		(*line)[i] = save[i];
	(*line)[i] = '\0';
	save += len + 1;
	return (save);
}
int i = 0;
int	get_next_line(int fd, char **line)
{
	static char	*save;
	int			flag;

	flag = 0;
	if (fd < 0 || !line)
		return (-1);
	if (!gnl_get_enter(save))
		save = gnl_read_join(fd, save, &flag);
	else
		flag = 1;
	save = gnl_get_from_save(save, line, &flag);
	printf("%d line=%s save=%s flag=%d\n", ++i, line[0], save, flag);
	return (flag);
}

int	main(void)
{
	char	**line;
	int		fd;

	line = (char **)malloc(sizeof(char *) * 1);
	fd = open("a.txt", O_RDONLY);
	get_next_line(fd, line);
	get_next_line(fd, line);
	get_next_line(fd, line);
	get_next_line(fd, line);
	get_next_line(fd, line);
	get_next_line(fd, line);
	get_next_line(fd, line);
	get_next_line(fd, line);
	return (0);
}