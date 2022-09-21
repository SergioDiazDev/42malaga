/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:48:44 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/09/21 17:00:26 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		printf("Se te olvido el argumento :((\n");
		return (-42);
	}
		

	if (!strcmp(argv[1], "isalpha"))
	{
		int	i;

		i = -5;
		while (i < 300)
		{
			if (isalpha(i) == ft_isalpha(i))
			{
				printf("%d \n", i);
				printf("Real: %d \n", isalpha(i));
				printf(" Mia: %d \n", ft_isalpha(i));
			}
			i++;
		}
		return (1);
	}
	if (!strcmp(argv[1], "isdigit"))
	{
		int	i;
		i = -5;
		while (i < 300)
		{
			if (isdigit(i) == ft_isdigit(i))
			{
				printf("%d \n", i);
				printf("Real: %d \n", isdigit(i));
				printf(" Mia: %d \n", ft_isdigit(i));
			}
			i++;
		}
		return (1);
	}
}
