/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:15:57 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/05/31 22:45:13 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*array;
	int		i;

	i = 0;
	while (str[i])
		i++;
	array = (char *)malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

// int main(void)
// {
// 	char	*original = "asdjasd";
// 	char	*duplicada;

// 	duplicada = ft_strdup(original);
// 	if (duplicada)
// 	{
// 		printf("Duplicado: %s\n", duplicada);
// 		free(duplicada);
// 	}
// 	return (0);
// }
