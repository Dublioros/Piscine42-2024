/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:30:35 by joseguti          #+#    #+#             */
/*   Updated: 2024/06/08 13:30:44 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/* Función principal para probar ft_fibonacci
int main()
{
    int index = 10;
    printf("El %d-ésimo elemento de la sucesión de Fibonacci es %d\n", 
    index, ft_fibonacci(index));
    return 0;
}*/
