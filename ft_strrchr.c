/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:34:14 by elharuty          #+#    #+#             */
/*   Updated: 2023/01/30 17:49:28 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *) s;
	if (!s)
		return (0);
	while (s && s[i])
		i++;
	while (i >= 0)
	{
		if (c == s1[i])
			return (&s1[i]);
		i--;
	}
	return (0);
}
