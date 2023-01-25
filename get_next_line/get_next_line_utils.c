/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:00:02 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/01/25 10:43:55 by sdiaz-ru         ###   ########.fr       */
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

	if (size < 0)
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

char	*ft_memcpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


char	*ft_strjoin(char *s1, char *s2)
{
	int		size_s1;
	int		size_s2;
	int		i;
	char	*aux;

	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	aux = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);
	aux = ft_memcpy(aux, s1, size_s1);
	while (i < size_s1 + size_s2)
	{
		aux[size_s1 + i] = s2[i];
		i++;
	}
	aux[size_s1 + i] = '\0';
	return (aux);
}
