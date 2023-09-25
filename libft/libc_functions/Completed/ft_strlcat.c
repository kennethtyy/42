/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:59:38 by kentan            #+#    #+#             */
/*   Updated: 2023/09/24 12:59:38 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcat(char* dst, const char* src, size_t size)
{
	size_t i;
	size_t dst_len;
	size_t src_len;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[i] != '\0')
	{
		i++;
		dst_len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		src_len++;
	}
	i = 0;
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
