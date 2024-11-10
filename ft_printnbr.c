/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:22:52 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/10 15:56:04 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"

int	ft_printnbr(int nb)
{
	char	*dest;

	dest = ft_itoa(nb);
	ft_putstr_fd(dest, 1);
	return (ft_strlen(dest));
}
/*
#include <stdio.h>
int	main()
{
	// printnbr(15357);
	printf("\n%d", ft_printnb(-2147483648));
}*/