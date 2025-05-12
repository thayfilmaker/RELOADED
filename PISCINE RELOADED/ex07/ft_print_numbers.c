/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 23:30:38 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/08 21:26:09 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
/*int main(void)
{
    ft_print_numbers();
    return (0);
}*/
