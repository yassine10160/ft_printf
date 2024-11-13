/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:22:52 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/13 14:02:06 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printnbr(long n)
{
	int				count;
	char			c;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count += write(1, "-", 1);
	}
	if (n > 9)
		count += ft_printnbr(n / 10);
	c = (n % 10) + 48;
	return (count + write(1, &c, 1));
}
