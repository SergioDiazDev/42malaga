/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:41:52 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/09/28 18:28:17 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, t_size_t n)
{
	int		i;
	char	*s;

	i = 0;
	s = str;
	while (s[i] && i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
