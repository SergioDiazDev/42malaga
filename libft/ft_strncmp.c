/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:56:37 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/06 16:53:00 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, t_size_t n)
{
	t_size_t	i;
	int			aux;

	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		aux = str1[i] - str2[i];
		if (!str1[i])
			return (-1);
		if (!str2[i])
			return (1);
		if (aux)
			return (aux);
		i++;
	}
	return (0);
}
