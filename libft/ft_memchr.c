/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:26:01 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/29 17:40:51 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// const void *s Puntero a la memoria donde se va a buscar
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*str;
// 	char		a;
// 	size_t		n;
// 	char		*resultado;
// 	int			posicion;

// 	str = "abcdefghijklmnopqrstuvwxyz";
// 	a = 'g';
// 	n = unsigned long (const char *)strlen(str);
// 	resultado = (char *)ft_memchr(str, a, n);
// 	if (resultado != NULL)
// 	{
// 		posicion = resultado - str;
// 		printf("letra '%c' \n %d del texto \"%s\"\n", a, posicion, str);
// 	}
// 	else
// 	{
// 		printf("La letra '%c' no se encontró en el texto.\n", a);
// 	}
// }
