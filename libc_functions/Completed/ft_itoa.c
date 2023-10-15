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

int itoa_numdigit(int n)
{
	int numdigit;

	numdigit = 0;
	if(n = 0)
		return numdigit;
	while(n / 10 != 0)
	{
		numdigit++;
		n = n / 10;
	}
	return numdigit + 1;
}

char *ft_itoa(int n)
{
	int i;
	int numdigit;
	char *s;
	
	numdigit = itoa_numdigit(n);
	if (n < 0)
		s = (char *) malloc (sizeof(char) * numdigit + 1 + 1);
	else
		s = (char *) malloc (sizeof(char) * numdigit + 1);
	i = numdigit - 1;
	while (i != 0)
	{
		s[i] = (char) (n + '0');
		i--;
	}
	if (n < 0)
		s[i] = '-';
	return s;
}
