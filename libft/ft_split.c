/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:57:53 by ftumay            #+#    #+#             */
/*   Updated: 2022/02/23 16:57:56 by ftumay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

static int	kacdizi(char *s, char a)
{
	int	i;
	int	counter;

	i = 0;

	if(s[0] == a)
		i++;

	while(s[i] != '\0')
	{
		if(s[i] == a)
			counter++;
		i++;
	}
	return(counter + 1);
}

static char baski(char *s, char a)
{
	int	i;
	i = 0;
	while(s[i] != '\0' && )
	{

	}
	i = 0;
}

char	**ft_split(char const *s, char c)
{
	int	x;
	char **dizi;
	x = kacdizi(s,c);
	dizi = malloc(sizeof (char*) x);
}

int	main()
{
	char s[] = "elma,armut,muz,çilek,kayısı";
	char a = ',';
	printf("%d", kacdizi(s,a));
}
