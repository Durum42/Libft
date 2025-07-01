/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:11:06 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/29 18:01:48 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destc;
	unsigned char	*srcc;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	i = 0;
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	if (destc > srcc)
	{
		i = n;
		while (i-- > 0)
			destc[i] = srcc[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destc[i] = srcc[i];
			i++;
		}
	}
	return (dest);
}
// int main(void)
// {
// 	unsigned char *destc[1000];
// 	unsigned char *srcc;
// 	unsigned char *resultado;
// 	int i;

// 	srcc = (unsigned char *)"Hola mundo";
// 	i = 2;

// 	resultado = ft_memmove(destc, srcc, i);
// 	printf("Resltado %s\n", resultado);
// }
