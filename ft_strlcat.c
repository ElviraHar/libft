/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:22:30 by elharuty          #+#    #+#             */
/*   Updated: 2023/01/25 20:10:32 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;
	size_t	dstlentmp;

	i = 0;
	if ((!src ^ !dst) && !dstsize)
		return (0);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	dstlentmp = dstlen;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] && dstlen + 1 < dstsize)
		dst[dstlen++] = src[i++];
	dst[dstlen] = 0;
	return (dstlentmp + srclen);
}
