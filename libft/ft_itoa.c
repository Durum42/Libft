/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 20:53:13 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/06/02 10:23:43 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int nb)
{
	size_t	cont;

	cont = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		cont++;
	while (nb != 0)
	{
		nb /= 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (!n)
		return (ft_strdup("0"));
	i = ft_intlen(n);
	s = (char *)malloc((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	s[i--] = '\0';
	while (n)
	{
		s[i--] = (n % 10) + '0';
		n = (n / 10);
	}
	return (s);
}

// int	main(void)
// {
// 	int			ing;
// 	const char	*resultado;

// 	ing = 123;

// 	resultado = ft_itoa(ing);
// 	printf("Resultado es :%s\n", resultado);

// }
