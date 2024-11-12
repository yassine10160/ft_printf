/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:33:42 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/11 17:02:16 by yafahfou         ###   ########.fr       */
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
int		ft_printnbr(int nb);
char	*ft_uitoa(unsigned int n);
int		ft_print_ui(unsigned int ui);
char	*ft_itoa(int n);
size_t	ft_strlen(char *str);
void	ft_putstr_fd(char *str, int fd);
void	ft_putchar_fd(char c, int fd);

#endif
