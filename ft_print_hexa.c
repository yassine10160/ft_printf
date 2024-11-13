/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:52:19 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/13 14:02:22 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_hexa(unsigned int nb, char c)
{
	int		count;
	char	*base1;
	char	*base2;

	count = 0;
	base1 = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (nb < 16)
	{
		if (c == 'x')
			return (count + write(1, &base1[nb], 1));
		else
			return (count + write(1, &base2[nb], 1));
	}
	else
	{
		count += ft_print_hexa(nb / 16, c);
		return (count += ft_print_hexa(nb % 16, c));
	}
}
