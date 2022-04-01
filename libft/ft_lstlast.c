/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:37:17 by ftumay            #+#    #+#             */
/*   Updated: 2022/04/01 00:11:32 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//malloc fonksiyonuyla RAM de bir yer ayırıyorsun ve bunu funda pointerının
//içine yazıyoruz.
//funda pointerının gösterdiği yere gidip mallocla açılan yerin content kısmına
//"isim" yazar

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int	main(void)
{
	t_list	*funda;
	t_list	*tumay;
	t_list	*ergun;
	funda = (t_list *)malloc(sizeof(t_list));
	tumay = (t_list *)malloc(sizeof(t_list));
	ergun = (t_list *)malloc(sizeof(t_list));
	funda->content = "isim";
	tumay->content = "soyisim";
	ergun->content = "arkadas";
	funda->next = tumay;
	tumay->next = ergun;
	ergun->next = NULL;
	//printf("%s", (char *)(funda->next->next->content));
	printf("%s", (char *)(ft_lstlast(funda)->content));
}
*/
