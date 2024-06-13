/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <joseguti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:34:08 by joseguti          #+#    #+#             */
/*   Updated: 2024/05/26 13:37:58 by joseguti         ###   ########.fr       */
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
			if (j == 1 && i == 1 || y == j && i == 1)
				ft_putchar('A');
			else if (j == y && i == x || j == 1 && x == i)
				ft_putchar('C');
			else if (i == 1 || i == x || j == 1 || j == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
