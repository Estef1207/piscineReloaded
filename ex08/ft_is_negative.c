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

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
/*
int	main(void)
{
	int positive;
	int negative;
	int null;

	positive = -8595;
	negative = -56;
	null = 10;

	ft_is_negative(positive);
	ft_is_negative(negative);
	ft_is_negative(null);
}*/
