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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int a;
	int b;
	int division;
	int	residuo;

	a = 12;
	b =	8;
	
	ft_div_mod(a, b, &division, &residuo);
	printf("%d\n", division);
	printf("%d\n", residuo);
}*/
