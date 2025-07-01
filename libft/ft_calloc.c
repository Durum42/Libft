/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 20:43:33 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/31 22:44:35 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nmemb Nº de elementos que necesitas y size, el espacio de memoria que ocupan
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = nmemb * size;
	if (nmemb != 0 && ((total / nmemb) != size))
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
