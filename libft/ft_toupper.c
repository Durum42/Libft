/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:27:27 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/29 17:55:59 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
// int main()
// {
//     int resultado;

//     resultado = ft_toupper('k');
//     printf("Resultado: %c\n", resultado);
//     return(0);
// }
