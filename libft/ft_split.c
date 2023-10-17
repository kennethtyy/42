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

static size_t	split_numsubstr(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	char	**arr_str;
	size_t	substr_len;
	int		i;

	arr_str = (char **) malloc ((split_numsubstr(s, c) + 1) * sizeof(char *));
	if (!s || !arr_str)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c))
				substr_len = ft_strchr(s, c) - s;
			else
				substr_len = ft_strlen(s);
			arr_str[i++] = ft_substr(s, 0, substr_len);
			s = s + substr_len;
		}
	}
	arr_str[i] = NULL;
	return (arr_str);
}
