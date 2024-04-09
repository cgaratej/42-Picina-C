/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:59:41 by cgaratej          #+#    #+#             */
/*   Updated: 2023/10/27 10:42:19 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = 200;
	*b = 1500;
}

int	main(void)
{
	int a;
	int b;

	a = 50;
	b = 20;

	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}
