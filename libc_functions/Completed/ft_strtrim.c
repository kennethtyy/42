/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan </var/mail/kentan>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:29:27 by kentan            #+#    #+#             */
/*   Updated: 2023/09/27 07:45:55 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char * s2;

	if (s1[1] != '\0' || set[1] != '\0')
	{
		i = 0;
		j = 0;
		j = ft_strlen(s1) - 1;
		while(s1[i] != '\0' && ft_strchr(set,s1[i]))
		{
			i++;
		}
		while (ft_strchr(set,s1[j]))
		{
			j--;
		}
		if (j >= i)
		{
			s2 = (char *) malloc (sizeof(char) * (j - i + 1) + 1);
			ft_strlcpy(s2, &s1[i], (j - i + 1) + 1);
		}
	}
	return s2;
}

