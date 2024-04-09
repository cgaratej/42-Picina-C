/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:15:31 by cgaratej          #+#    #+#             */
/*   Updated: 2023/11/01 10:18:32 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	resultado;

	resultado = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (power > 1)
	{
		resultado *= ft_recursive_power(nb, (power -1));
	}
	return (resultado);
}
