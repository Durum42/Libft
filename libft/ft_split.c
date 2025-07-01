/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-rio <pdel-rio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:15:34 by pdel-rio          #+#    #+#             */
/*   Updated: 2025/06/02 17:33:17 by pdel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wlength(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

size_t	ft_charcount(const char *s, char c)
{
	size_t	cont;
	size_t	i;

	cont = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cont++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (cont);
}

void	*ft_freesplit(char **spl, int i)
{
	while (i)
		free(spl[--i]);
	free(spl);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**spl;

	i = 0;
	j = 0;
	spl = ft_calloc(ft_charcount(s, c) + 1, sizeof(char *));
	if (!spl)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			spl[j] = ft_substr(s + i, 0, ft_wlength(s + i, c));
			if (!spl[j])
				return (ft_freesplit(spl, j));
			j++;
			i += ft_wlength(s + i, c);
		}
		else
			i++;
	}
	spl[j] = NULL;
	return (spl);
}

// int	main(void)
// {
// 	int		i;
// 	char	**result;

// 	result = ft_split("Hola mundo q   wwer wer q ", ' ');
// 	if (!result)
// 		return (1);

// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
