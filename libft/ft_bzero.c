/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:22:49 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/29 17:57:19 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (*s);
}
// int main()
// {
//     char str[10];
//     int i;

//     i = 0;

//     while (i <= 10)
//     {
//         str[i] = 'A';
//         i++;
//     }
//     ft_bzero(str, 10);

//     for (i = 0; i < 10; i++)
//         printf("%d ", str[i]);
// }
