/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:27:05 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/30 20:39:28 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*a;

	a = NULL;
	while (*s)
	{
		if (*s == (char)c)
			a = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)a);
}

// int main(void)
// {
//     char *str;
//     char a;
//     char resultado;

//     str = "abcdtefhijklmnopqrstuvwxyyz";
//     a = 'h';
//     resultado = *ft_strchr(str, a);
//     printf("El caracter %c esta en la cadena %s", a, str );
// }
