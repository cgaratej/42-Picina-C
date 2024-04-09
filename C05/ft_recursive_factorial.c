/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:38:28 by cgaratej          #+#    #+#             */
/*   Updated: 2023/10/31 14:24:50 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb > 0)
		resultado *= nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	return (resultado);
}
