/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:27:22 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/29 17:55:27 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
// int main()
// {
//     int resultado;

//     resultado = ft_tolower('K');
//     printf("Resultado: %c\n", resultado);
//     return(0);
// }
