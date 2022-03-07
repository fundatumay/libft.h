/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:14:14 by ftumay            #+#    #+#             */
/*   Updated: 2022/03/07 00:14:17 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Samanlıkta iğne aramak. "fundatumay" içinde "da" arıyosun
bulduğunda direkt d'den itibaren yazıyosun
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0' && j == needle_len - 1)
				return (&((char *)haystack)[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	haystack[] = "fundatumay";
	char	needle[] = "da";
	printf("%s", ft_strnstr(haystack, needle, 8));
}
*/
