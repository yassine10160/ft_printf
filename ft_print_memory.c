/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:54:33 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/08 15:46:31 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_print_memory(unsigned long long addr)
{
	size_t	i;
	char tab[17];

	i = 16;//0x avant mon adresse
	if (!addr)
	{
		ft_putstr("(nil)");
		return ;
	}
	while (i >= 0)
	{
		tab[16] = 
	}

}