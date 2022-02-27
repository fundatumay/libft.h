/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:46:57 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/13 16:09:43 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//alfabetik karakter testi yapar

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return(1);
	return(0);
}

/* Daha kısa yoldan yapmak istersen
	return((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
*/

/*int	main(void)
{
	char c = 'a';
	printf("%d", isalpha(c));
}
*/
