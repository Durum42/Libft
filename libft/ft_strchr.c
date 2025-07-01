/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:26:19 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/06/02 16:41:00 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	correct;

	i = 0;
	correct = 0;
	while (s[i] != '\0' && correct == 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
			correct = 1;
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
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
