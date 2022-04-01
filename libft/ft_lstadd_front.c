/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 03:26:07 by ftumay            #+#    #+#             */
/*   Updated: 2022/04/01 02:23:26 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//listenin başına yeni bir eleman (new) ekler
//fonksiyon void tipinde dönüş değeri yok.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*new_list;
	t_list	*new_list2;
	t_list	*new_list3;
	t_list	*first_node;
	t_list	*second_node;

	new_list = (t_list *)malloc(sizeof(t_list));
	new_list2 = (t_list *)malloc(sizeof(t_list));
	new_list3 = (t_list *)malloc(sizeof(t_list));
	first_node = (t_list *)malloc(sizeof(t_list));
	second_node = (t_list *)malloc(sizeof(t_list));
	new_list->content = "bir";
	new_list2->content = "iki";
	new_list3->content = "uc";
	first_node->content = "a";
	second_node->content = "b";
	new_list->next = new_list2;
	new_list2->next = new_list3;
	first_node->next = second_node;
	printf("%s", (char *)(ft_lstadd_front(*first_node, new_list)->content));
}
*/
