/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan </var/mail/kentan>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:55:14 by kentan            #+#    #+#             */
/*   Updated: 2023/09/25 17:17:04 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	char *s3;
	int s1len;
	int s2len;
	int i;

	s1len = 0;
	s2len = 0;
	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s3 = (char *) malloc (sizeof(char) * (s1len + s2len) + 1);
	while(i <s1len)
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while(i < s2len)
	{
		s3[s1len + i] = s2[i];
		i++;
	}
	s3[s1len + i] = '\0';
	return s3;
}
