/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:11:51 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/10 14:29:46 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "libft/libft.h"

int ft_printf(const char *fmt, ...)
{
	va_list	ap;
	// int		d;
	char	c;
	// char	*s;
	size_t	i;

	i = 0;
	va_start(ap, fmt);
	while(fmt[i])
	{
		if (fmt[i] == '%')
		{
			if (fmt[i + 1] == 's')
				ft_putstr_fd(va_arg(ap, char *), 1);
			else if(fmt[i + 1] == 'c')
			{
				c = (char) va_arg(ap, int);
				ft_putchar_fd(c, 1);
			}

			// else if (fmt[i + 1] == 'd')	
		}
		i++;
	}
	va_end(ap);
	return (0);
}
#include <stdio.h>
int main()
{
	//char 	*str = "hello world";
	//char	*c = "wesh";
	// char	*s = "hi everyone";
	// char	*s2 = "letsgo";
	char	c1 = 'h';

	ft_printf("%c", c1);
	//printf("\n%p\n%p\n%p\n%p", str, c, s, s2);
	printf("\n%c", c1);

}
