/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_it.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:53:30 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/18 15:53:33 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_return1(char *str)
{
	if (str > 0)
		return (1);
	else
		return (0);
}*/
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			num++;
		}
		i++;
	}
	return (num);
}
/*
int	main(void)
{
	char	*tab[] = {"hola", "adios", "adeu", "merci", "aguacate", NULL};
	int		x = ft_count_it((tab), ft_return1);
	printf("el numero de strings del array tab es: %d", x);
	return(0);
} */
