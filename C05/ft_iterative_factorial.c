/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:12:30 by cgaratej          #+#    #+#             */
/*   Updated: 2023/10/31 10:51:08 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	while (nb > 0)
	{
		resultado *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (resultado);
}
