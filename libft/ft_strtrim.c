/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 09:36:39 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/15 15:06:31 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	len = 0;
	if (s != NULL)
	{
		while (start < ft_strlen(s) && ft_isspace(s[start]))
			start++;
		end = ft_strlen(s) - 1;
		while (end > start && ft_isspace(s[end]))
			end--;
		len = end - start + 1;
	}
	return (ft_strsub(s, start, len));
}
