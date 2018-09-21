/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:18:40 by lsibanda          #+#    #+#             */
/*   Updated: 2018/06/16 21:37:40 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strlennbr(int n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	long			temp;
	char			*str;
	unsigned int	len;

	temp = (long)n;
	str = NULL;
	len = ft_strlennbr(temp) + (n < 0);
	if (n < 0)
		temp = (temp * -1);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		str[len - 1] = (temp % 10) + '0';
		len--;
		temp = temp / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
