/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:13:02 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/06 11:04:55 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		result;

	i = -1;
	result = 1;
	if (!ft_strlen(s2))
		return ((char *)s1);
	while (*(s1 + ++i) && i < len)
	{
		j = 0;
		if (*(s1 + i) == *(s2 + 0))
		{
			k = i;
			result = 1;
			while (*(s1 + k) && *(s2 + j) && j < len && k < len)
				if (*(s1 + k++) != *(s2 + j++))
					result = 0;
			if (result && !*(s2 + j))
				return ((char *)s1 + i);
		}
	}
	return (NULL);
}
