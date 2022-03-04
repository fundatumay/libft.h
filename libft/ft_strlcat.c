/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:49:53 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/04 12:49:57 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(dest[j])
		j++;
	while(src[i] && i < dest_size)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return(ft_strlen(dest));
}

/*
int	main(void)
{
	char	dest[] = "funda";
	char	src[] = "tumay";
	printf("%zu\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);
}
*/
