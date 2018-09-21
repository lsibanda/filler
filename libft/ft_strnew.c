/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:09:15 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/06 10:09:11 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!(tmp = malloc(sizeof(*tmp) * (size + 1))))
		return (NULL);
	if (tmp)
	{
		while (i <= size)
		{
			tmp[i] = '\0';
			i++;
		}
	}
	return (tmp);
}
