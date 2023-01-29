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

	line = NULL;
	aux = NULL;
	if (fd <= 0 || BUFFER_SIZE <= 0)
	{
		free(buff);
		buff = NULL;
		return (NULL);
	}
	buff = ft_read(fd, buff);
	if (!buff)
	{
		free(buff);
		buff = NULL;
		return (NULL);
	}
	nl = ft_nllen(buff);
	line = ft_calloc(sizeof(char), nl + 1);
	if (!line)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	line = ft_memcpy(line, buff, nl);
	i = -1;
	while (buff[nl + ++i])
		buff[i] = buff[nl + i];
	aux = ft_calloc(sizeof(char), i + 1);
	if (!aux)
	{
		free(aux);
		aux = NULL;
		return (NULL);
	}
	aux = ft_memcpy(aux, buff, i);
	buff = aux;
	return (line);
}

char	*ft_read(int fd, char *buff)
{
	char	*aux;
	int		flag;

	flag = 1;
	while (flag > 0)
	{
		aux = NULL;
		if (buff)
			if (ft_nllen(buff) != ft_strlen(buff))
				return (buff);
		if (!buff)
		{
			buff = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			if (!buff)
			{
				free(buff);
				buff = NULL;
				return (NULL);
			}
			flag = read(fd, buff, BUFFER_SIZE);
		}
		else
		{
			aux = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			if (!aux)
			{
				free(aux);
				aux = NULL;
				return (NULL);
			}
			flag = read(fd, aux, BUFFER_SIZE);
			buff = ft_strjoin(buff, aux);
		}
		if (!buff)
			return (NULL);
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
