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

/*#include <unistd.h>*/

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

/*cmp params */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/* print params */

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
	int	i;

	i = 0;
	while (i++ < (argc - 1))
	{
		if (i + 1 < argc && ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			argv[argc + 1] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = argv[argc + 1];
			i = 0;
		}
	}
	ft_print_params(argv);
}
