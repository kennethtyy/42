/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:02:54 by kentan            #+#    #+#             */
/*   Updated: 2023/09/24 13:51:20 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	int little_len;

	i = 0;
	j = 0;
	little_len = 0;
	if (little[0] == '\0')
		return (char *)big;
	while (little[i] != '\0')
	{
		little_len++;
		i++;
	}
	i = 0;
	while(big[i] != '\0')
	{
		while((big[i+j] == little[j]) && big[i+j] != '\0')
		{
			if ((j == little_len-1) || (j == len-1))
				return (char *)&big[i];
			j++;
		}
		j = 0;
		i++;
	}
	return 0;
}
