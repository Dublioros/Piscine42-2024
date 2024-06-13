/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:29:30 by joseguti          #+#    #+#             */
/*   Updated: 2024/06/08 13:29:52 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/* Función principal para probar ft_recursive_power
int main()
{
    int base = 2;
    int exp = 3;
    printf("%d a la potencia de %d es %d\n", 
    base, exp, ft_recursive_power(base, exp));
    return 0;
}*/
