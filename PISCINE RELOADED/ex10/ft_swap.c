/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:34:52 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/08 21:52:27 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>
int main()
{
	int	a = 5;
	int	b = 3;

	ft_swap(&a, &b);
	printf("%d \n", a);
	printf("%d", b);
}*/