/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:20:59 by joseguti          #+#    #+#             */
/*   Updated: 2024/05/26 15:21:24 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int	i;
	int	j;

	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if (j == 1 && i == 1 || j == y && i == x)
				ft_putchar('/');
			else if (j == y && i == 1 || j == 1 && x == i)
				ft_putchar('\\');
			else if (i == 1 || i == x || j == 1 || j == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
