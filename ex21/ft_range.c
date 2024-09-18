/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:43:58 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/17 11:44:02 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h> */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*range;
	int	i;

	len = (max - min);
	range = malloc(len * sizeof(int));
	if (range == NULL)
		return (0);
	if (min >= max)
		return (0);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	len;

	min = 5;
	max = 500;
	len = max - min;
	range = ft_range(min, max);

	if (range != NULL)
	{
		printf("El rango de numeros entre %d y %d son: %d", min, max, *range);
		free (range);
	}
	else
		printf("Rango invalido");
	return (0);
} */
