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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;

	i = 0;
	s3 = (char *) malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s3)
		return (0);
	while (i < (int) ft_strlen(s1))
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < (int) ft_strlen(s2))
	{
		s3[(int) ft_strlen(s1) + i] = s2[i];
		i++;
	}
	s3[(int) ft_strlen(s1) + i] = '\0';
	return (s3);
}
