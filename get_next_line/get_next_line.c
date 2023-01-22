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

	nl = ft_read(fd, buff);
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

char	*ft_read(int fd, char *buff)
{
	if (!buff)
		buff = ft_calloc(sizeof(char), BUFFER_SIZE)
}

char	*ft_free(void *ptr, void *ptr1)
{
	free(ptr);
	free(ptr1);
	return (NULL);
}
