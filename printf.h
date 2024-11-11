/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:33:42 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/11 12:40:57 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_print_hexa(unsigned int nb, char c);
int		ft_print_ptr(unsigned long long addr);
int		ft_putstr(char *str);
int		ft_printnbr(int nb);
char	*ft_uitoa(unsigned int n);
int		ft_print_ui(unsigned int ui);

#endif