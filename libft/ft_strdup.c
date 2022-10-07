/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:33:12 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/07 13:04:32 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*aux;
	t_size_t	size;

	size = ft_strlen(s);
	aux = malloc(size * sizeof(aux));
	if (aux != NULL)
	{
		while (size + 1 != 0)
		{
			aux[size] = s[size];
			size--;
		}
		if (ft_strlen(aux) == ft_strlen(s))
			return (aux);
	}
	return (NULL);
}
