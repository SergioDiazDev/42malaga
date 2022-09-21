/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:48:44 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/09/21 13:03:12 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	(void)argv;
	i = 0;
	while (i < 255)
	{
		if (isalpha(i) == ft_isalpha(i))
		{
			printf("%d \n", i);
			printf("Real: %d \n", isalpha(i));
			printf(" Mia: %d \n", ft_isalpha(i));
		}
		i++;
	}
}
