/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 08:48:49 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/09/23 09:03:56 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, t_size_t n)
{
	int			i;
	char const	*s;
	char		*d;

	s = src;
	d = dest;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	if (s[i - 1] != '\0')
		d[i] = '\0';
	return (d);
}
