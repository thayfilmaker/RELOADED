/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:43:40 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/08 21:59:04 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar ('N');
	}
	else
	{
		ft_putchar('P');
	}
}
/*int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(0);
	ft_is_negative(42);
	return 0;
}*/