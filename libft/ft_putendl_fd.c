/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:39:54 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/31 09:05:41 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write (fd, s++, 1);
		write (fd, "\n", 1);
	}
}

// int	main(void)
// {
// 	ft_putendl_fd("hello", 0);
// 	ft_putendl_fd("hello", 1);
// 	ft_putendl_fd("hello", 2);
// }
