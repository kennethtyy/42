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

static int	split_numsubstr(char const *s, char c)
{
	int	num_substr;
	int	in_substr;

	num_substr = 0;
	in_substr = 0;
	while (*s != '\0')
	{
		if (*s != c)
			in_substr = 1;
		else
		{
			if (in_substr == 1)
			{
				num_substr++;
				in_substr = 0;
			}
		}
		s++;
	}
	if (in_substr == 1)
		num_substr++;
	return (num_substr);
}

static void	split_allocstr(char const *s, char c, char ***arr_s)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i + j] != c && (s[i + j] != '\0'))
				j++;
			(*arr_s)[k] = (char *) malloc (sizeof(char) * (j + 1));
			ft_strlcpy((*arr_s)[k], &s[i], (j + 1));
			k++;
			i = i + j;
			j = 1;
		}
		if (s[i] != '\0')
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr_s;
	int		num_substr;

	if (s == NULL || s[0] == '\0')
		return (0);
	num_substr = split_numsubstr(s, c);
	if (s[0] != '\0')
	{
		arr_s = (char **) malloc (sizeof(char *) * num_substr + 1);
		arr_s[num_substr] = NULL;
		split_allocstr(s, c, &arr_s);
	}
	return (arr_s);
}
