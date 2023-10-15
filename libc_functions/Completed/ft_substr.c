/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan </var/mail/kentan>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:36:01 by kentan            #+#    #+#             */
/*   Updated: 2023/09/25 15:44:01 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub_s;
	int i;

	i = 0;
	sub_s = (char *) malloc (sizeof(char) * len + 1);
	while(i < len)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	return sub_s;
}