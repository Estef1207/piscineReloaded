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
#include <string.h>
#include <stdio.h> */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = strlen(src) + 1;
	copy =(char *) malloc(len * sizeof(char));
	if (copy == NULL)
		return (0);
	else
		strcpy(copy, src);
	return (copy);
}
/*
int	main(void)
{
	char	src[] = "esto es un texto a copiar";
	char	*copy = ft_strdup(src);

	if (copy != NULL)
	{
		printf("esta es la cadena original:%s\n", src);
		printf("esta es la cadena duplicada:%s\n", copy);
		free (copy);
	}
	else
	{
		printf("No se ha podido realizar la copia");
	}
	return (0);
}*/
