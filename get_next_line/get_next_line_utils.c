/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:00:02 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/01/31 18:32:37 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, t_size_t n)
{
	t_size_t	i;
	char		*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(t_size_t nmemb, t_size_t size)
{
	void	*aux;

	if (size <= 0)
		return (NULL);
	aux = malloc(nmemb * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, nmemb * size);
	return (aux);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (unsigned char)c;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (i);
		i++;
	}
	if (s[i] == ch)
		return (i);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !str)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
