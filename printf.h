/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:33:42 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/12 18:01:28 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_print_hexa(unsigned int nb, char c);
int		ft_print_ptr(unsigned long long addr);
int		ft_putstr(char *str);
int		ft_printnbr(long n);
size_t	ft_strlen(char *str);
int		ft_printf(const char *fmt, ...);

#endif
