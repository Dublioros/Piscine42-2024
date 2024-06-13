/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:22:44 by joseguti          #+#    #+#             */
/*   Updated: 2024/06/13 14:22:45 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn_recursive(int n, char *tab, int index)
{
	int	j;

	if (index == n)
	{
		write(1, tab, n);
		if (tab[0] != '9' - n + 1)
			write(1, ", ", 2);
		return ;
	}
	if (index == 0)
		j = '0';
	else
		j = tab[index - 1] + 1;
	while (j <= '9')
	{
		tab[index] = j;
		ft_print_combn_recursive(n, tab, index + 1);
		j++;
	}
}

void	ft_print_combn(int n)
{
	char	tab[10];

	if (n < 1 || n > 9)
		return ;
	ft_print_combn_recursive(n, tab, 0);
}
