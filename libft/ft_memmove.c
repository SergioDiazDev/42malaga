/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:11:36 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/19 17:17:04 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	const char	*s;
	char		*d;
	char		buf[65536];

	s = src;
	d = dest;
	ft_memcpy(buf, s, n);
	ft_memcpy(d, buf, n);
	return (dest);
}
