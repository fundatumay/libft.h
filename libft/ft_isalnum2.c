/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:44:37 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/13 16:44:39 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int isalnum2(int c)
{
	return(isdigit(c) || isalpha(c));
}

int	main(void)
{
	int c = 'f';
	printf("%d", isalnum2(c));
}
