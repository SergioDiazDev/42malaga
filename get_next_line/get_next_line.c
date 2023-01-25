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

	buff = ft_read(fd, buff);
	nl = ft_nllen(buff);
	line = ft_calloc(sizeof(char), nl + 1);
	if (!line || !buff)
		return (ft_free(buff, line));
	ft_memcpy(line, buff, nl);
	i = 0;
	while (buff[nl + i])
	{
		buff[i] = buff[nl + i];
		i++;
	}
	aux = ft_calloc(sizeof(char), i + 1);
	if (!aux || !buff)
		return (ft_free(buff, aux));
	ft_memcpy(aux, buff, i);
	free(buff);
	buff = aux;
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
		if (buff)
			if (ft_nllen(buff) != ft_strlen(buff))
				break ;
		if (!buff)
		{
			buff = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			if (!buff)
				return (ft_free(buff, NULL));
			flag = read(fd, buff, BUFFER_SIZE);
		}
		else
		{
			aux = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			if (!aux)
				return (ft_free(buff, aux));
			flag = read(fd, aux, BUFFER_SIZE);
			buff = ft_strjoin(buff, aux);
			free(aux);
		}
	}
	return (buff);
}

int	ft_nllen(char *buff)
{
	int nl;

	nl = 0;
	while (buff[nl])
	{
		if (buff[nl] == '\n')
			return (++nl);
		nl++;
	}
	return (nl);
}

char	*ft_free(void *ptr, void *ptr1)
{
	if (ptr)
		free(ptr);
	if (ptr1)
		free(ptr1);
	return (NULL);
}
