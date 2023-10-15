/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:58:48 by kentan            #+#    #+#             */
/*   Updated: 2023/09/24 12:58:49 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == (unsigned char)c)
		{
			return (&s1[i]);
		}
		i++;
	}
	return (0);
}
