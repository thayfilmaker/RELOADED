/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:53:02 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/09 14:35:46 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H

# define FT_ABS_H

# define ABS(Value) (abs(Value))

int	abs(int value)
{
	if (value < 0)
		value = -value;
	return (value);
}

#endif