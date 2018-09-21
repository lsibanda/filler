/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:47:09 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/18 10:29:04 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*sorc;
	char	*dest;

	sorc = (char *)src;
	dest = (char *)dst;
	if (sorc < dest)
		while (len--)
		{
			dest[len] = sorc[len];
		}
	else
		ft_memcpy(dest, sorc, len);
	return (dst);
}
