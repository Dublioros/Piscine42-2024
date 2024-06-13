/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:56:46 by joseguti          #+#    #+#             */
/*   Updated: 2024/06/08 13:56:52 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		i++;
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

/* Función principal para probar ft_is_prime
int main()
{
    int num = 29;
    if (ft_is_prime(num))
    {
        printf("%d es un número primo\n", num);
    }
    else
    {
        printf("%d no es un número primo\n", num);
    }
    return 0;
}*/
