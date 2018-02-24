/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 02:48:46 by rzarate           #+#    #+#             */
/*   Updated: 2018/02/24 04:17:42 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	fillit(char	*s)
{
	int **p;
	int i;
	int y;

	i = -1;
	y = -1;
	if (check_input(s) == -1)
	{
		ft_putendl_fd("File is blank", 2);
		return ;
	}
	else if (check_input(s) == 0)
	{
		ft_putendl_fd("Usage text goes here", 2);
		return ;
	}
	else
		p = parse_tets(s);
		
}