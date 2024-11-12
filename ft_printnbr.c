/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:22:52 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/11 17:14:21 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    ft_putnbr(int n)
{
	unsigned int	ui;
	int				count;
	char			c;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count += write(1, "-", 1);
	}
	ui = n;
	if (ui > 9)
		count += ft_putnbr(ui / 10);
	return (count + write(1, (ui % 10) + 48, 1));
}
/*
#include <stdio.h>
int	main()
{
	// printnbr(15357);
	printf("\n%d", ft_printnb(-2147483648));
}*/