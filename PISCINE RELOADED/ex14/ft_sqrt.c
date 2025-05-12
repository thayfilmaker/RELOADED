/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:04:22 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/09 13:09:20 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb < 0)
		return (0);
	while (nb > n * n)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	return (0);
}*/
