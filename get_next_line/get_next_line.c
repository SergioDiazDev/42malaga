/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:33:27 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/12/08 12:33:27 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buff = NULL;
	char		*line;
	char		*aux;
	int			nl;
	int			i;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	aux = buff;
	buff = ft_read(fd, aux);
	if (ft_strlen(buff) == 0)
	{
		if (buff)
		{
			free(buff);
			buff = NULL;
		}
		return (NULL);
	}
	nl = ft_nllen(buff);
	line = ft_calloc(sizeof(char), nl + 1);
	line = ft_memcpy(line, buff, nl);
	i = -1;
	while (buff[nl + ++i])
		buff[i] = buff[nl + i];
	aux = ft_calloc(sizeof(char), i + 1);
	aux = ft_memcpy(aux, buff, i);
	free(buff);
	buff = ft_calloc(sizeof(char), i + 1);
	buff = ft_memcpy(buff, aux, i);
	return (free(aux), line);
}

char	*ft_read(int fd, char *buff)
{
	char	*aux;
	int		flag;

	flag = 1;
	while (flag > 0)
	{
		if (buff && ft_strlen(buff) == 0)
			if (!ft_truenl(buff))
				return (buff);
		if (ft_strlen(buff) == 0)
		{
			buff = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			flag = read(fd, buff, BUFFER_SIZE);
		}
		else
		{
			aux = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			flag = read(fd, aux, BUFFER_SIZE);
			if (flag == 0)
				return (free(aux), buff);
			buff = ft_strjoin(buff, aux);
			free(aux);
		}
	}
	return (buff);
}

int	ft_nllen(char *buff)
{
	int	nl;

	nl = 0;
	if (ft_strlen(buff) == 0)
		return (0);
	while (buff[nl])
	{
		if (buff[nl] == '\n')
			return (++nl);
		nl++;
	}
	return (nl);
}

int	ft_truenl(char *buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
			return (0);
		i++;
	}
	return (i);
}
