/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:08:18 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/07 15:22:09 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//arrayden(string, dizi) integer tipine dönüşüm yapar.

int	ft_atoi(const char *str)
{
	int	i;
	int	ret_value;
	int	polarity;

	i = 0;
	polarity = 1;
	ret_value = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			polarity *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret_value = ret_value * 10 + str[i] - 48;
		i++;
	}
	return (ret_value * polarity);
}

/*
int	main(void)
{
	char	array []= "+-54";
	printf("%d", ft_atoi(array));
}
*/
