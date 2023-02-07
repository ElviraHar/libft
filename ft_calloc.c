/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:01:02 by elharuty          #+#    #+#             */
/*   Updated: 2023/02/02 22:43:05 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*i;
	size_t	total;

	total = size * count;
	if (total < size || total < count)
		return (NULL);
	i = malloc (total);
	if (!i)
		return (0);
	ft_memset(i, 0, total);
	return (i);
}
