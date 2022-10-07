/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:41:52 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/07 12:24:24 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, t_size_t n)
{
	t_size_t	i;

	i = 0;
	while (*(char *)(str + i) && i < n)
	{
		*(char *)(str + i) = c;
		i++;
	}
	return (str);
}
