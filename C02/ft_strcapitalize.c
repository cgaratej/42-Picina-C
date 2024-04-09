/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:29:26 by cgaratej          #+#    #+#             */
/*   Updated: 2023/10/25 16:16:48 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_tolower(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
			c[i] += 32;
		i++;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capi;

	i = 0;
	capi = 1;
	ft_tolower(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (capi == 1)
				str[i] -= 32;
			capi = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capi = 0;
		else
			capi = 1;
		i++;
	}
	return (str);
}
