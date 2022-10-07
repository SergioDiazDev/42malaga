/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:17:55 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/07 12:28:17 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	t_size_t	i;
	t_size_t	size;

	i = 0;
	size = ft_strlen(str);
	while (i <= size)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
