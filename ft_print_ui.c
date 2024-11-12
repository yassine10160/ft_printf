/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ui.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:05:19 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/11 16:55:19 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_ui(unsigned int ui)
{
	char	*dest;

	dest = ft_uitoa(ui);
	ft_putstr_fd(dest, 1);
	return (ft_strlen(dest));
}
