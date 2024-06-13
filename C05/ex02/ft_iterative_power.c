/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:28:44 by joseguti          #+#    #+#             */
/*   Updated: 2024/06/08 13:28:53 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/* Función principal para probar ft_iterative_power
int main()
{
    int base = 2;
    int exp = 3;
    printf("%d a la potencia de %d es %d\n", 
    base, exp, ft_iterative_power(base, exp));
    return 0;
}*/
