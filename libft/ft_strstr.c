/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:28:29 by lsibanda          #+#    #+#             */
/*   Updated: 2018/05/25 10:24:54 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;

	if (!*s2)
		return ((void *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			str1 = (void *)s1 + 1;
			str2 = (void *)s2 + 1;
			while (*str1 && *str2 && *str1 == *str2)
			{
				++str1;
				++str2;
			}
			if (!*str2)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
