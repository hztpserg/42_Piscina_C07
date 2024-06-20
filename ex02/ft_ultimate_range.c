/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:57:18 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/08 19:09:10 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arreglo;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arreglo = (int *)malloc(size * sizeof(int));
	if (arreglo == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		arreglo[i] = min;
		min++;
		i++;
	}
	*range = arreglo;
	return (size);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	numero;

	i = 0;
	signo = 0;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
		|| str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signo ++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		numero = (numero * 10) + (str[i] - '0');
		i++;
	}
	if ((signo % 2) != 0)
		numero = -numero;
	return (numero);
}
