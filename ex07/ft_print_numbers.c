/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:22:45 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/12 12:22:55 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c <= 57)
	{
		ft_putchar(c);
		c++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return(0);
}*/
