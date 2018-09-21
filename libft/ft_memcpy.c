/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:40:21 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/18 09:55:01 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*sorc;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	sorc = (char *)src;
	while (i < n)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (dst);
}
