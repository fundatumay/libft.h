/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:24:25 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/13 16:24:36 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int	isdigit(int c)
{
	while(c <= '9' && c >= '0')
		return(1);
	return(0);
}

/*int	main(void)
{
	int c = '5';
	printf("%d", isdigit(c));
}
*/

//rakam mı diye test eder

/* Daha kısa yoldan yapmak istersen
	return(c <= '9' && c >= '0');
*/
