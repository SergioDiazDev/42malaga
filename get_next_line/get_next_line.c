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

	aux = NULL;
	line = NULL;
	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = ft_read(fd, buff);
	if (!buff || buff[0] == 0)
		return (ft_free(buff, NULL));
	nl = ft_nllen(buff);
	line = ft_calloc(sizeof(char), nl + 1);
	line = ft_memcpy(line, buff, nl);
	i = -1;
	while (buff[nl + ++i])
		buff[i] = buff[nl + i];
	aux = ft_calloc(sizeof(char), i + 1);
	aux = ft_memcpy(aux, buff, i);
	free(buff);
	buff = aux;
	if (!aux || !buff)
		return (ft_free(buff, aux));
	return (line);
}

char	*ft_read(int fd, char *buff)
{
	char	*aux;
	int		flag;

	aux = NULL;
	flag = 1;
	while (flag > 0)
	{
		if (buff)
			if (ft_nllen(buff) != ft_strlen(buff))
				break ;
		if (!buff)
		{
			buff = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			flag = read(fd, buff, BUFFER_SIZE);
			if (buff == NULL)
				return (ft_free(buff, NULL));
		}
		else
		{
			aux = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			flag = read(fd, aux, BUFFER_SIZE);
			buff = ft_strjoin(buff, aux);
			free(aux);
			aux = NULL;
		}
		if (!buff)
			return (ft_free(buff, NULL));
	}
	return (buff);
}

int	ft_nllen(char *buff)
{
	int	nl;

	nl = 0;
	if (!buff)
		return (0);
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
	{
		free(ptr);
		ptr = NULL;
	}
	if (ptr1)
	{
		free(ptr1);
		ptr1 = NULL;
	}
	return (NULL);
}
