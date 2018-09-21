/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 07:59:42 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/17 01:34:04 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (dst[i] && i < dstsize)
		i++;
	while ((src[k] && (i + k + 1) < dstsize))
	{
		dst[i + k] = src[k];
		k++;
	}
	if (i != dstsize)
		dst[i + k] = '\0';
	return (i + ft_strlen((char*)src));
}
