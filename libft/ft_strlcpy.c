/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:26:34 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/29 17:44:49 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//revisar

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = ft_strlen(src);
		if (dst != NULL && dstsize != 0)
		{
			i = 0;
			while ((i < len) && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}
