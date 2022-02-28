/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:49:54 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/28 00:49:57 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (!src && !dest)
		return(0);
	if (dest > src)
	{
		while(len--)
		{
			*((unsigned char*) (len + dest)) = *((unsigned char*) (len + src));
		}
	}
	else if
		while (len--)
		{
			*((unsigned char *)dest)[i] = *((unsigned char *)src)[i];
			i++;
		}

	return(dest);
}

int	main(void)
{
	char	src[] = "fundatumay";
	printf("%s\n", ft_memmove((src + 5), src, 4));
	printf("%s", memmove(src + 5, src, 4));
}
