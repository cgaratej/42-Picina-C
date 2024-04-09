/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:14:42 by cgaratej          #+#    #+#             */
/*   Updated: 2023/11/08 12:39:57 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_fillarr(int **range, int min, int difference)
{
	int	counter;
	counter = 0;
	while (counter < difference)
	{
		range[0][counter] = min + counter;
		counter++;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	difference;
	
	difference = max - min;
	*range = (int *) malloc(difference * sizeof(int));
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ft_fillarr(range, min, difference);
	return (difference);
}


