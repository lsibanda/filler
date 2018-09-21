/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:28:21 by lsibanda          #+#    #+#             */
/*   Updated: 2018/05/23 11:38:33 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		c;

	c = -1;
	while (++c < (int)n)
	{
		if (*(unsigned char*)(s1 + c) != *(unsigned char*)(s2 + c))
		{
			return (*(unsigned char*)(s1 + c) - *(unsigned char*)(s2 + c));
		}
	}
	return (0);
}
