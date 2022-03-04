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

//Diziyi boyutu kadar kopyalıyor ancak src dizisinin uzunluğunu döndürüyor

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	if (dest_size > 0)
	{
		while (i < (dest_size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char dest[] = "funda";
	char src[] = "tumaya";
	printf("%zu\n", ft_strlcpy(dest, src, 3));
	printf("%s", dest);
}
*/


//Debug işlemlerinde kullanılıyor
//Kopyalama işlemi yapılıyo fonksiyonu çalıştırıp dest dizisini çağırsam src kopyalanmış dest gelecek
//Ama fonksiyonu çalıştırıp çıkan değeri bir integera atarsam src'nin uzunluğu dönecek
//Geçmişte debug diye bir şey olmadığı için doğru işlem yapılmış mı diye strlcpy kullanılırmış
//Strlcpy bana src'nin uzunluğunu veriyo ve ben dest'in uzunluğuna bakıp doğru veya yanlış yapmış kod diyebiliyorum????

