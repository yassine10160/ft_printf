/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:52:19 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/08 14:23:44 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void    ft_print_hexa(unsigned long nb)
{
    char	*base;
    size_t	i;

    base = "0123456789abcdef";
	i = 0;
	if (nb >= 16)
	{
		ft_print_hexa(nb / 16);
		ft_print_hexa(nb % 16);
	}
	else
	{
		write(1, &base[nb], 1);
	}
}

int	main()
{
	ft_print_hexa(26);
}