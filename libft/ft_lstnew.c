/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:29:26 by ftumay            #+#    #+#             */
/*   Updated: 2022/04/01 04:59:36 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//birdenfazla typeı birleştirip tek bir type oluşturmak için struct yapıları var
//Çalışanların bordrosunu bir programlama dilinde tutmak için fazla değişkenli
//mesai saati, adı, soyadı, yaşı, tc kimlik numarası, adresi, maaşı vb.
//Yukarıdaki bilgilerin hepsini birleştirerek tek bir bilgi halinde tutmak için
//struct kullanarak yeni bir type tanımlıyoruz ve bu type ın
//tüm alt özelliklerini birleştirerek tek type haline getiriyoruz.

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int	main(void)
{
	char *isim = "funda";
	printf("%s", (char *)(ft_lstnew(isim)->content));
}
*/
