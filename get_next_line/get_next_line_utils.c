/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:00:02 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/01/18 16:03:48 by sdiaz-ru         ###   ########.fr       */
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

/**
 * @brief	Esta funcion se encarga de unir 2 String y reservarle un una nueva memoria
 * 			Dispone de un contador que limita los caracteres a copiar de la segunda String
 * 			Esta funcion tiene dependencias: ft_strlen y ft_calloc.
 * 
 * @param	char*	str1	Primera String
 * @param	char*	str2	Segunda String
 * @param	int		size	Tamaño a copiar de la segunda String. Si el tamaño <= 0 se ignora.
 */
char	*ft_strjoin(char *str1, char *str2, int size)
{
	char	*out_string;
	int		len_str1;
	int		len_str2;
	int		it1;
	int		it2;

	len_str1 = ft_strlen(str1);
	if (size <= 0)
		len_str2 = size;
	else
		len_str2 = ft_strlen(str2);
	out_string = ft_calloc(sizeof(char), len_str1 + len_str2 + 1);
	it1 = 0;
	while (str1[it1])
	{
		out_string[it1] = str1[it1];
		it1++;
	}
	it2 = 0;
	while (str2[it2] && it2 <= len_str2)
	{
		out_string[it1] = str2[it2];
		it1++;
		it2++;
	}
	out_string[len_str1 + len_str2 + 1] = '\0';
	return (out_string);
}
