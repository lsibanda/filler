/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:15:52 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/13 13:22:30 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		new = ft_strnew(ft_strlen(s));
		if (!new)
			return (NULL);
		while (s[i])
		{
			new[i] = f(i, s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}
