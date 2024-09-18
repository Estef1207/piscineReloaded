/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:56:06 by esmeza-s          #+#    #+#             */
/*   Updated: 2024/09/13 16:56:10 by esmeza-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

void	ft_print_params(char **str)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (str[x] > '\0')
	{
		while (str[x][y] != '\0')
		{
			ft_putchar(str[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
		y = 0;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_print_params(argv);
	return (0);
}
