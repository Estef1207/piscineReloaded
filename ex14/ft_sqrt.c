/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:08:57 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/12 15:09:03 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	sq;

	sq = 1;
	while (sq * sq < nb)
	{
		sq++;
	}
	if (sq * sq == nb)
	{
		return (sq);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	int x;
	int y;

	x = 65;
	y = ft_sqrt(x);
	printf("la raiz cuadrada de %d es: %d", x, y);
}*/
