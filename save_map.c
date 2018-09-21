/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsibanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:22:56 by lsibanda          #+#    #+#             */
/*   Updated: 2018/07/18 09:22:58 by lsibanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

void	ft_get_piece(t_piece *piece)
{
	char	*line;
	char	*p_join;
	int		i;
	int		line_nbr;

	i = 0;
	p_join = "\0";
	line_nbr = 0;
	get_next_line(0, &line);
	while (ft_isdigit(line[i]) == 0)
		i++;
	piece->p_col = ft_atoi(&line[i]);
	while (ft_isdigit(line[i]) == 1)
		i++;
	i++;
	piece->p_row = ft_atoi(&line[i]);
	while (get_next_line(0, &line) > 0)
	{
		p_join = ft_strjoin(p_join, line);
		p_join = ft_strjoin(p_join, "\n");
		line_nbr++;
		if (line_nbr == piece->p_col)
			break ;
	}
	piece->piece = ft_strsplit(p_join, '\n');
}

void	ft_get_map(t_info *info, t_piece *piece)
{
	char	*line;
	char	*m_join;
	int		line_nbr;

	m_join = "\0";
	line_nbr = 0;
	while (get_next_line(0, &line) > 0)
	{
		if (ft_isdigit(line[0]) == 1)
		{
			m_join = ft_strjoin(m_join, &line[4]);
			m_join = ft_strjoin(m_join, "\n");
			line_nbr++;
		}
		if (line_nbr == info->m_col)
			break ;
	}
	info->map = ft_strsplit(m_join, '\n');
	ft_get_piece(piece);
}

void	ft_get_pivotmap(t_info *info)
{
	int		pivot_map;
	int		j;

	j = 0;
	pivot_map = (info->m_col / 2) - (info->m_col / 10);
	while (info->map[pivot_map][j] != '\0')
	{
		if (info->map[pivot_map][j] == 'X')
			info->pivot = pivot_map;
		j++;
	}
}
