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
	static char	*static_line = NULL;
	char		*out_line;	

	if (fd <= 0)
		return (NULL);
	out_line = ft_read(fd, static_line);
}

char	*ft_read(int fd, char *static_line)
{
	char	*buf;
	int		iter;
	int		total_iter;

	buf = ft_calloc(sizeof(char), BUFFER_SIZE);
	total_iter = read(fd, buf, BUFFER_SIZE);
	while (total_iter == BUFFER_SIZE)
	{
		if (total_iter <= 0)
			return (ft_free(buf, static_line));
		iter = 0;
		while (iter <= total_iter)
		{
			if (buf[iter] == '\n')
			{
				
			}
			iter++;
		}
	}
}

char	*ft_free(void *ptr, void *ptr2)
{
	free(ptr);
	free(ptr2);
	return (NULL);
}
