/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:48:44 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/09/23 17:45:45 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
	{
		printf("Se te olvido el argumento :((\n");
		return (-42);
	}
	if (!strcmp(argv[1], "isalpha"))
	{
		i = 0;
		while (i < 256)
		{
			if (isalpha(i) != ft_isalpha(i))
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
		i = 0;
		while (i < 256)
		{
			if (isdigit(i) != ft_isdigit(i))
			{
				printf("%d \n", i);
				printf("Real: %d \n", isdigit(i));
				printf(" Mia: %d \n", ft_isdigit(i));
			}
			i++;
		}
		return (1);
	}
	if (!strcmp(argv[1], "isalnum"))
	{
		i = 0;
		while (i < 256)
		{
			if (isalnum(i) != ft_isalnum(i))
			{
				printf("%d \n.", i);
				write(1, &i, 1);
				printf(".Real: %d \n", isalnum(i));
				printf(" Mia: %d \n", ft_isalnum(i));
			}
			i++;
		}
		return (1);
	}
	if (!strcmp(argv[1], "isascii"))
	{
		i = 0;
		while (i < 256)
		{
			if (isascii(i) == ft_isascii(i))
			{
				printf("%d \n.", i);
				printf(".Real: %d \n", isascii(i));
				printf(" Mia: %d \n", ft_isascii(i));
			}
			i++;
		}
		return (1);
	}
	if (!strcmp(argv[1], "isprint"))
	{
		i = 0;
		while (i < 256)
		{
			if (isprint(i) == ft_isprint(i))
			{
				printf("%d \n.", i);
				printf(".Real: %d \n", isprint(i));
				printf(" Mia: %d \n", ft_isprint(i));
			}
			i++;
		}
		return (1);
	}
	if (!strcmp(argv[1], "strlen"))
	{
		if (strlen("str") == ft_strlen("str"))
			printf("correcto\n");
		else
			printf("Cagada\n");
		if (strlen("") == ft_strlen(""))
			printf("correcto\n");
		else
			printf("Cagada\n");
		if (strlen("1qw2") == ft_strlen("1qw2"))
			printf("correcto\n");
		else
			printf("Cagada\n");
		if (strlen("\n\t") == ft_strlen("\n\t"))
			printf("correcto\n");
		else
			printf("Cagada\n");
		if (strlen(".r") == ft_strlen(".t"))
			printf("correcto\n");
		else
			printf("Cagada\n");
		if (strlen(" ") == ft_strlen("  "))
			printf("cagada\n");
		else
			printf("Correcto\n");
	}
	if (!strcmp(argv[1], "memset"))
	{
		char	aux[] = "asñdfghjklñqwertyuiop";
		memset(aux, '$', 5);
		printf("%s", aux);
	}
	if (!strcmp(argv[1], "bzero"))
	{
		char	aux[] = "asñdfghjklñqwertyuiop";
		bzero(aux, 24);
		printf("%s", aux);
	}
	if (!strcmp(argv[1], "memcpy"))
	{
		char	aux[] = "asñdfghjklñqwertyuiop";
		char	dest[20];

		ft_memcpy(dest, aux, 27);
		printf("%s", dest);
	}
	if (!strcmp(argv[1], "memmove"))
	{
		char	aux[] = "asñdfghjklñqwertyuiop";

		ft_memmove((aux + 3), aux, 16);
		printf("%s", (aux + 3));
	}
	if (!strcmp(argv[1], "strlcpy"))
	{
		char	aux[] = "asñdfghjklñqwertyuiop";
		char	dest[24];

		//ft_strlcpy(dest, aux, 12);
		printf("%s", dest);
	}
}
