/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:52:19 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/10 17:53:04 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_convert_hexa(unsigned int nb, char c)
{
	char	*base;
	size_t	i;
	char	*base2;

	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	i = 0;
	if (nb >= 16)
	{
		ft_print_hexa(nb / 16, c);
		ft_print_hexa(nb % 16, c);
	}
	else
	{
		if (c == 'x')
			write(1, &base[nb], 1);
		else if (c == 'X')
			write(1, &base2[nb], 1);
	}
}

int	ft_print_hexa(unsigned int nb, char c)
{
	unsigned int	len;

	len = 0;
	ft_convert_hexa(nb, c);
	while (nb > 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}
/*
int	main()
{
	__builtin_printf("\n%d",ft_count_hexa(26, 'X'));
}*/