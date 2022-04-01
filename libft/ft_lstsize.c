/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:34:07 by ftumay            #+#    #+#             */
/*   Updated: 2022/04/01 04:57:20 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Listedeki eleman sayısını bulur.
//lst şu an bir adres tutuyo. lst'nin nextini lst ye atayınca
//lst artık lst nin next elemanının adresini tutuyo

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst && ++count)
		lst = lst->next;
	return (count);
}
