/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:16:56 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/09 13:17:00 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	res;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res);
}
