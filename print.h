/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:33:42 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/08 15:12:55 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

#include <unistd.h>
#include <stdarg.h>

void	ft_putchar(char c);
void	ft_print_hexa(unsigned long nb);
void	ft_print_memeory(char *addr);


#endif