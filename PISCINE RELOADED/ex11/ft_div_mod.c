/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:59:59 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/08 23:11:19 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main()
{
	int a = 10;
	int b = 5;
	int x;
	int y;
	
	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d\n, x");
	printf("%d", y);
}*/