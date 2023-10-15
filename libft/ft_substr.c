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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) - start >= len)
		sub_s = (char *) malloc (sizeof(char) * len + 1);
	else
		sub_s = (char *) malloc (sizeof(char) * (ft_strlen(s) - start) + 1);
	if (!s || !sub_s)
		return (0);
	i = 0;
	while (i < len && i < ft_strlen(s))
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
