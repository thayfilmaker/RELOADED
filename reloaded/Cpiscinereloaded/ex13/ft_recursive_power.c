/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:31:30 by thasousa          #+#    #+#             */
/*   Updated: 2025/02/06 20:03:25 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 3));
	return (0);
}*/