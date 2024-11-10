/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:11:51 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/10 18:14:32 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

int	ft_handle(va_list ap, char c)
{
	char	d;
	int		len;

	len = 0;
	if (c == 's')
		len = ft_putstr(va_arg(ap, char *));
	else if (c == 'c')
	{
		d = (char) va_arg(ap, int);
		ft_putchar(d);
	}
	else if (c == 'd' || c == 'i')
		len = ft_printnbr(va_arg(ap, int));
	else if (c == 'x' || c == 'X')
		len = ft_print_hexa(va_arg(ap, unsigned int), c);
	else if (c == 'u')
		len = ft_print_ui(va_arg(ap, unsigned int));
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			len += ft_handle(ap, fmt[i + 1]);
			i++;
		}
		else
			len += ft_putchar(fmt[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
/*
#include <stdio.h>
int main()
{
	//char 	*str = "hello world";
	//char	*c = "wesh";
	// char	*s = "hi everyone";
	// char	*s2 = "letsgo";
	// char	c1 = 'h';
	// int		n = 46003;

	//ft_printf("%d", n);
	// printf("\n%d", ft_printf("%d", n));
	//printf("\n%p\n%p\n%p\n%p", str, c, s, s2);
	//printf("\n%c", c1);
	// printf("\n%d", n);
	printf("%u\n", -26);
	ft_printf("%u", -26);

}*/