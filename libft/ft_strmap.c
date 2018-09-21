/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 10:11:29 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/08 13:13:31 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*src;
	char	*dst;
	size_t	i;

	src = (char *)s;
	if (src && f)
	{
		if (!(dst = ft_strnew(ft_strlen(s))))
			return (NULL);
		i = 0;
		while (src[i] != '\0')
		{
			dst[i] = (*f)(src[i]);
			i++;
		}
		return (dst);
	}
	return (NULL);
}
