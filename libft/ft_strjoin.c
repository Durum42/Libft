/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:18:22 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/31 22:26:15 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

//si malloc falla devuelve NUL 

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*array;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		array = (char *)malloc(sizeof(char) * (size + 1));
		if (!array)
			return (NULL);
		i = 0;
		j = 0;
		while (s1[j])
			array[i++] = s1[j++];
		j = 0;
		while (s2[j])
			array[i++] = s2[j++];
		array[i] = '\0';
		return (array);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*resultado;

// 	s1 = "Hola";
// 	s2 = " mundo!!";
// 	resultado = ft_strjoin(s1, s2);
// 	printf ("Resultado: %s\n", resultado);
// 	free (resultado);
// 	return (0);
// }
