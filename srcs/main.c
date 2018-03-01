/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarate <rzarate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 01:16:09 by rzarate           #+#    #+#             */
/*   Updated: 2018/03/01 02:05:25 by rzarate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	fillit(char *s, t_master *mst)
{
	int			*p;
	int			n;
	int			i;

	i = -1;
	n = check_input(s);
	if (n == -1)
	{
		ft_putstr("error");
		return ;
	}
	else if (n == 0)
	{
		ft_putstr("error");
		return ;
	}
	p = parse_tetriminos(s);
	solve_tetrimino(p, count_tets(s), mst);
	return ;
}

int		main(int ac, char **av)
{
	int			fd;
	int			ret;
	char		buf[BUF_SIZE + 1];
	t_master	mst;

	if (ac == 1 || ac > 2)
		ft_putstr("error");
	else if (ac == 2)
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
		{
			ft_putendl("error");
			return (0);
		}
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		fillit(buf, &mst);
		if (close(fd) == -1)
			ft_putendl("error");
	}
	return (0);
}
