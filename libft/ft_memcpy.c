/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:59:25 by kentan            #+#    #+#             */
/*   Updated: 2023/09/24 12:59:26 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;
	size_t		i;

	if (!dest && !src)
		return (0);
	i = 0;
	dest2 = dest;
	src2 = src;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
