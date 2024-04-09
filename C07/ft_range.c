/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:22:58 by cgaratej          #+#    #+#             */
/*   Updated: 2023/11/08 12:04:21 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	diferencia;

	i = 0;
	if (min >= max)
		return (0);
	diferencia = max - min;
	range = (int *) malloc(diferencia * sizeof(int));
	if (!range)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
