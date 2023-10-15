/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan </var/mail/kentan>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 07:47:24 by kentan            #+#    #+#             */
/*   Updated: 2023/09/27 09:16:01 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int split_numarr(char const *s, char c)
{
	int i;
	int j;
	int num_arr;

	i = 0;
	j = 0;
	num_arr = 0;
	while (s[j] != '\0')
	{
		if ((s[j] == c))
		{
			if (i != j)
				num_arr++;
			i = j + 1;
		}
		j++;
		num_arr++;
	}
	return num_arr;
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	char **arr_s;
	
	if (s[1] != '\0')
	{
		arr_s = (char **) malloc (sizeof(char *) * split_numarr(s,c));
		i = 0;
		j = 0;
		k = 0;
		while (s[j] != '\0')
		{
			if (s[j] == c)
			{
				if (i != j)
				{
					arr_s[k] = (char *) malloc (sizeof(char) * (j - i) + 1);
					ft_strlcpy(arr_s[k], &s[i],(j - i) + 1);
					k++;
				}
				i = j + 1;
			}
			j++;
		}
		arr_s[k] =  (char *) malloc (sizeof(char) * (j - i) + 1);
		ft_strlcpy(arr_s[k], &s[i], (j - i) + 1);
	}
	return arr_s;
}
