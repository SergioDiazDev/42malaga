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
	buff = ft_read(fd, buff);
	nl = ft_nllen(buff);
	if (nl == 0)
		return (NULL);
	line = ft_calloc(sizeof(char), nl + 1);
	ft_memcpy(line, buff, nl);
	i = -1;
	while (buff[nl + ++i])
		buff[i] = buff[nl + i];
	aux = ft_calloc(sizeof(char), i + 1);
	ft_memcpy(aux, buff, i);
	free(buff);
	buff = ft_calloc(sizeof(char), i + 1);
	ft_memcpy(buff, aux, i);
	free(aux);
	return (line);
}

char	*ft_read(int fd, char *buff)
{
	char	*aux;
	int		flag;

	flag = 1;
	while (flag > 0)
	{
		if (ft_truenl(buff) == 0)
			if (buff[0] != '\0')
				return (buff);
		if (!buff)
		{
			buff = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			flag = read(fd, buff, BUFFER_SIZE);
		}
		else
		{
			aux = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			flag = read(fd, aux, BUFFER_SIZE);
			if (flag == 0)
				return (buff);
			buff = ft_strjoin(buff, aux);
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
	if (!buff)
		return (-1);
	while (buff[i])
	{
		if (buff[i] == '\n')
			return (0);
		i++;
	}
	return (i);
}
