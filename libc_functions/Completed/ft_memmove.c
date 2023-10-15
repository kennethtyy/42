/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:57:04 by kentan            #+#    #+#             */
/*   Updated: 2023/09/24 12:57:05 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *dest2;
	char src2[n];
	
	dest2 = dest;
	i = 0;
	while (i < n)
	{
		src2[i] = ((char *) src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return dest;
}
