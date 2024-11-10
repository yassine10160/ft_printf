/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:33:42 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/10 15:58:00 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int		ft_putchar(char c);
void	ft_print_hexa(unsigned long nb);
void	ft_print_memeory(char *addr);
int		ft_putstr(char *str);
int		ft_printnbr(int nb);


#endif