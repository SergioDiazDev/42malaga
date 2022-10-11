/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:28:26 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/11 10:49:58 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, t_size_t len)
{
	char		*aux;
	t_size_t	i;

	aux = (char *)malloc(len + 1 * sizeof(char));
	if (aux == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		aux[i] = (char)s[start];
		start++;
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
