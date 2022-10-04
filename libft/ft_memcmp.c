/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:31:19 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/04 20:37:37 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, t_size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	return (ft_strncmp(s1, s2, n));
}
