/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:05:56 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/08 15:44:24 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arreglo;

	if (min >= max)
	{
		arreglo = NULL;
		return (arreglo);
	}
	arreglo = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (!(min >= max))
	{
		arreglo[i] = min;
		min++;
		i++;
	}
	return (arreglo);
}
