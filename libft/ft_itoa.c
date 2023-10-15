/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan </var/mail/kentan>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:17:55 by kentan            #+#    #+#             */
/*   Updated: 2023/09/27 09:42:13 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	itoa_numspace(int n)
{
	int	numspace;

	numspace = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		numspace++;
	while (n != 0)
	{
		numspace++;
		n = n / 10;
	}
	return (numspace);
}

char	*itoa_neg(int n)
{
	int		i;
	int		numspace;
	char	*s;

	numspace = itoa_numspace(n);
	s = (char *) malloc (sizeof(char) * (numspace + 1));
	i = 1;
	s[0] = '-';
	n = n * -1;
	s[numspace] = '\0';
	while (i < numspace)
	{
		s[numspace - i] = (char)((n % 10) + '0');
		i++;
		n = n / 10;
	}
	return (s);
}

char	*itoa_pos(int n)
{
	int		i;
	int		numspace;
	char	*s;

	numspace = itoa_numspace(n);
	s = (char *) malloc (sizeof(char) * (numspace + 1));
	i = 0;
	s[numspace] = '\0';
	while (i < numspace)
	{
		s[numspace - i - 1] = (char)((n % 10) + '0');
		i++;
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;

	if (n < 0)
		s = itoa_neg(n);
	else
		s = itoa_pos(n);
	return (s);
}
