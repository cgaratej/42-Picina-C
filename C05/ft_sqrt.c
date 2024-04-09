/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:16:19 by cgaratej          #+#    #+#             */
/*   Updated: 2023/11/08 14:38:49 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	quest;

	quest = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		while ((quest * quest) <= nb)
		{
			if (quest * quest == nb)
				return (quest);
			quest++;
		}
	}
	return (0);
}
