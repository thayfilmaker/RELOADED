/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:14:28 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/08 23:27:39 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		n *= nb;
		n--;
	}
	return (n);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%i\n, ft_iterative_factorial (10)");
	return (0);
}*/