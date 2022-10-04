/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:11:53 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/05 00:30:56 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		i;
	int		signo;
	int		ex;

	i = 0;
	ex = 1;
	num = 0;
	signo = 1;
	while (!ft_isdigit(str[i]) && (str[i] != '+' || str[i] != '-') && ex)
	{
		i++;
		ex = 0;
	}
	i--;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num += (str[i] - '0');
		num *= 10;
		i++;
	}
	return (signo * num / 10);
}
