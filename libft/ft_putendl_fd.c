/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan </var/mail/kentan>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:03:40 by kentan            #+#    #+#             */
/*   Updated: 2023/09/28 15:30:05 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	newline;

	newline = '\n';
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		write(fd, &newline, 1);
		i++;
	}
}
