/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:52:05 by kentan            #+#    #+#             */
/*   Updated: 2023/09/24 14:14:46 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
	int i;
	int result;
	int sign;
	
	i = 0;
	result = 0;
	sign = 1;
	if (nptr[0] == '-')
	{
		sign = -1;
		i = 1;
	}	
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}
