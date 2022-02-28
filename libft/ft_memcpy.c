/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:58:15 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/27 23:58:17 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//n byte kadar src den deste kopyalama
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char src[] = "funda";
	char dest[] = "tumay";
	printf("%s", ft_memcpy(dest, src, 2));
}
*/

//Void değişkenleri ilk başta bir chara atayıp daha sonra bu charlar üzerinden işlem yapabilirsin
//Bu sayede her dest veya void kullanman gerektiğinde değişken dönüşümü yapmazsın
//Ama değişken tanımladığın için bellekte ekstra yer kullanmış olursun.
