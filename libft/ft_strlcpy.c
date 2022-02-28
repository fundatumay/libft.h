/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:49:42 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/28 10:49:46 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Diziyi boyutu kadar kopyalıyor ancak dizinin uzunluğunu döndürüyor

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	size_t i;
	int	a;

	i = 0;
	while (src[i] && i < (destsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = '\0';
	a = ft_strlen(src);
	return(a);
}

int	main(void)
{
	char destm[] = "funda";
	char srcm[] = "tu";
	printf("%zu", ft_strlcpy(destm, srcm, 3));
}
