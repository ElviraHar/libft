/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:13:37 by elharuty          #+#    #+#             */
/*   Updated: 2023/02/09 17:13:39 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	first_index(char const *s1, char const *set)
{
	size_t	test;
	size_t	set_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	test = 0;
	set_len = ft_strlen(set);
	while (test < set_len)
	{
		if (s1[i] == set[j])
		{
			test = 0;
			j = 0;
			i++;
		}
		else
		{
			j++;
			test++;
		}
	}
	return (i);
}

size_t	last_index(char const *s1, char const *set)
{
	size_t	test;
	size_t	set1_len;
	size_t	s1_len;
	size_t	j;

	test = 0;
	j = 0;
	set1_len = ft_strlen(set);
	s1_len = ft_strlen(s1) - 1;
	while (test < set1_len)
	{
		if (s1[s1_len] == set[j] && s1_len > 0)
		{
			test = 0;
			j = 0;
			s1_len--;
		}
		else
		{
			j++;
			test++;
		}
	}
	return (s1_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	nb;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	i = first_index(s1, set);
	j = last_index(s1, set);
	if (i > j)
		return (ft_strdup(""));
	nb = j - i;
	return (ft_substr(s1, i, nb + 1));
}
