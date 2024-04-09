/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:48:45 by cgaratej          #+#    #+#             */
/*   Updated: 2023/11/02 10:38:34 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchat(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		ft_putchat(argv[j][i]);
		i++;
		if (argv[j][i] == '\0')
		{
			j++;
			i = 0;
			ft_putchat('\n');
		}
	}
	return (0);
}
