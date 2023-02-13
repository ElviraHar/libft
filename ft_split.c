/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:57:07 by elharuty          #+#    #+#             */
/*   Updated: 2023/02/09 18:35:53 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**numword(const char *s, char c, int i, int tx)
{
	int		count;
	char	**dest;

	count = 0;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (tx != 0)
				count++;
			tx = 0;
		}
		else
			tx++;
		i++;
	}
	dest = malloc((count + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	dest[count] = NULL;
	return (dest);
}

char	**ffree(char ***s1)
{
	int	i;

	i = -1;
	while ((*s1)[++i])
	{
		free((*s1)[i]);
		(*s1)[i] = 0;
	}
	free(*s1);
	*s1 = 0;
	return (NULL);
}

char	**fff(const char *s, char c, int i, int j)
{
	int		k;
	char	**dest;

	k = 0;
	dest = (char **)numword(s, c, 0, 0);
	if (!dest)
		return (NULL);
	while (s[j])
	{
		if (s[j] != c)
		{
			k = j;
			while (s[j] && s[j] != c)
				j++;
			dest[i] = ft_substr(s, k, j - k);
			if (!dest[i])
				return (ffree(&dest));
			i++;
		}
		else if (s[j] == c)
			j++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (fff(s, c, 0, 0));
}
