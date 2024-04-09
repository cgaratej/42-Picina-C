/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:58:44 by cgaratej          #+#    #+#             */
/*   Updated: 2023/10/30 15:37:10 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	space(char *str, int *get_i)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*get_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	simbolo;
	int	resultado;
	int	i;

	resultado = 0;
	simbolo = space(str, &i);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		resultado = ((resultado * 10) + (str[i] - '0'));
		i++;
	}
	resultado *= simbolo;
	return (resultado);
}
