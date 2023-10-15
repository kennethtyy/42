/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:20:00 by kentan            #+#    #+#             */
/*   Updated: 2023/09/24 18:34:34 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	s2 = (char *) malloc ((sizeof(char) * len) + 1);
	if (!s2)
		return (0);
	while (s[i] != '\0')
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
