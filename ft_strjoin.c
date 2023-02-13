/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:12:42 by elharuty          #+#    #+#             */
/*   Updated: 2023/02/08 19:12:43 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	c = malloc(sizeof(char) * len);
	if (!c)
		return (0);
	while (s1[j] != '\0')
		c[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		c[i++] = s2[j++];
	c[i] = '\0';
	return (c);
}
