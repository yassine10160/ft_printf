/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:54:33 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/11 12:49:18 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_conv_hexa(unsigned long long nb)
{
	char	*base;
	size_t	i;

	base = "0123456789abcdef";
	i = 0;
	if (nb >= 16)
	{
		ft_conv_hexa(nb / 16);
		ft_conv_hexa(nb % 16);
	}
	else
		write(1, &base[nb], 1);
}

int	ft_print_ptr(unsigned long long addr)
{
	size_t	i;

	i = 0;
	if (!addr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		i = 2;
		write(1, "0x", 2);
		ft_conv_hexa(addr);
	}
	while (addr > 0)
	{
		addr /= 16;
		i++;
	}
	return (i);
}