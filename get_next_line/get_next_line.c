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
	static char	*buff;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buff = ft_read(fd, buff);
	if (!buff)
		return (NULL);
	line = ft_get_line(buff);
	buff = ft_new_buff(buff);
	return (line);
}

char	*ft_read(int fd, char *buff)
{
	char	*aux;
	int		flag;

	if (!buff)
		buff = ft_calloc(1, 1);
	aux = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	flag = 1;
	while (flag > 0 && ft_strchr(buff, '\n') == 0)
	{
		flag = read(fd, aux, BUFFER_SIZE);
		if (flag == -1)
		{
			free(aux);
			free(buff);
			return (0);
		}
		aux[flag] = '\0';
		buff = ft_joinfree(buff, aux);
	}
	free(aux);
	return (buff);
}

char	*ft_joinfree(char *str1, char *str2)
{
	char	*str;

	str = ft_strjoin(str1, str2);
	free(str1);
	return (str);
}

char	*ft_get_line(char *buff)
{
	int		i;
	char	*line;

	i = 0;
	if (!buff[i])
		return (0);
	while (buff[i] && buff[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buff[i] && buff[i] != '\n')
	{
		line[i] = buff[i];
		i++;
	}
	if (buff[i])
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_new_buff(char *buff)
{
	int		i;
	int		j;
	char	*n_buffer;

	i = 0;
	j = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (!buff[i])
	{
		free(buff);
		return (0);
	}
	n_buffer = ft_calloc(ft_strlen(buff) - i + 1, sizeof(char));
	if (!n_buffer)
		return (0);
	i++;
	while (buff[i])
		n_buffer[j++] = buff[i++];
	n_buffer[j] = '\0';
	free(buff);
	return (n_buffer);
}