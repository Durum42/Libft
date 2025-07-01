/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:57:50 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/06/04 17:53:10 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*c1;
	char		*c2;
	size_t		i;

	i = 0;
	c1 = (const char *)src;
	c2 = (char *)dest;
	while (i < n)
	{
		c2[i] = c1[i];
		i++;
	}
	return (dest);
}
