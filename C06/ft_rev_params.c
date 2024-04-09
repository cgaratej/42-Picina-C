/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:39:17 by cgaratej          #+#    #+#             */
/*   Updated: 2023/11/02 11:57:54 by cgaratej         ###   ########.fr       */
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
	j = argc - 1;
	while (j > 0)
	{
		ft_putchat(argv[j][i]);
		i++;
		if (argv[j][i] == '\0')
		{
			j--;
			i = 0;
			ft_putchat('\n');
		}
	}
	return (0);
}
