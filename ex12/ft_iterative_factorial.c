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

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i > 1)
	{
		i--;
		nb *= i;
	}
	return (nb);
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = ft_iterative_factorial(x);
	printf("el factorial de %d es: %d\n", x, y);
}*/
