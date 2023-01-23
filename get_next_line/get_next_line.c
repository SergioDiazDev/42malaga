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

char *get_next_line(int fd)
{
	static char	*buff = NULL;
	char		*line;
	char		*aux;
	int			nl;
	int			i;

	nl = ft_read(fd, buff);
	if(!nl)
		return(ft_free(buff, NULL));
	line = ft_calloc(sizeof(char), nl + 1);
	if (!line || buff)
		return (ft_free(line, buff));
	line = ft_memcpy(line, buff, nl);
	i = 0;
	while (buff[nl + 1 + i])
	{
		buff[i] = buff[nl + 1 + i];
		i++;
	}
	aux = ft_calloc(sizeof(char), i + 1);
	ft_memcpy(aux, buff, i);
	free(buff);
	buff = aux;
	free(aux);
	return (line);
}

int ft_read(int fd, char *buff)
{
	char	*aux;
	int		flag;
	int		i;

	flag = 1;
	while (flag > 0)
	{
		if (!buff)
		{
			buff = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			if (!aux)
				return ((int)ft_free(NULL, buff));
			flag = read(fd, buff, BUFFER_SIZE);
		}
		else
		{
			aux = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
			if (!aux)
				return ((int)ft_free(aux, buff));
			flag = read(fd, aux, BUFFER_SIZE);
			buff = ft_strjoin(buff, aux);
		}
		if (flag <= 0)
				return ((int)ft_free(aux, buff));
		i = 0;
		while(buff[i] && flag > 0)
		{
			if (buff[i] == '\n')
				flag = 0;
			i++;
		}
	}
	return (i - 1);
}

char *ft_free(void *ptr, void *ptr1)
{
	if(ptr)
		free(ptr);
	if(ptr1)
		free(ptr1);
	return (NULL);
}
