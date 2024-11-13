/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:11:51 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/13 14:01:34 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_handle(va_list ap, char c)
{
	if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'c')
		return (ft_putchar((char)va_arg(ap, int)));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(va_arg(ap, int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hexa(va_arg(ap, unsigned int), c));
	else if (c == 'u')
		return (ft_printnbr((unsigned int)va_arg(ap, unsigned int)));
	else if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(ap, unsigned long long)));
	return (-1);
}

int	ft_check(const char *fmt, size_t *i, va_list ap)
{
	int	tmp;

	tmp = 0;
	if (fmt[(*i)] == '%')
	{
		tmp = ft_handle(ap, fmt[(*i) + 1]);
		if (tmp < 0)
			return (-1);
		(*i)++;
		return (tmp);
	}
	return (ft_putchar(fmt[(*i)]));
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	size_t	i;
	int		len;
	int		tmp;

	i = 0;
	len = 0;
	if (write(1, 0, 0) == -1 || !fmt)
		return (-1);
	va_start(ap, fmt);
	while (fmt[i])
	{
		tmp = ft_check(fmt, &i, ap);
		if (tmp < 0)
		{
			va_end(ap);
			return (-1);
		}
		len += tmp;
		i++;
	}
	va_end(ap);
	return (len);
}

// #include <stdio.h>
// int main(void)
// {
//     // Test de %c (caractère)
//     printf("FAKE = %d\n", ft_printf("Test %c caractère\n", 'A'));
// 	printf("REAL = %d\n", printf("Test %c caractère\n", 'A'));
//     printf("-----\n");

//     // Test de %s (chaîne de caractères)
//     printf("FAKE = %d \n", ft_printf("Test %s chaîne\n", "Bonjour"));
// 	printf("REAL = %d\n", printf("Test %s chaîne\n", "Bonjour"));
//     printf("-----\n");

//     // Test de %p (pointeur)
//     int num = 42;
//     printf("FAKE = %d \n", ft_printf("Test %p pointeur\n", &num));
// 	printf("REAL = %d\n", printf("Test %p pointeur\n", &num));
//     printf("-----\n");

// 	printf("FAKE = %d \n", ft_printf("Test %p pointeur\n", "Slay"));
// 	printf("REAL = %d\n", printf("Test %p pointeur\n", "Slay"));
//     printf("-----\n");

// 	printf("FAKE = %d \n", ft_printf("Test %p pointeur\n", ""));
// 	printf("REAL = %d\n", printf("Test %p pointeur\n", ""));
//     printf("-----\n");

// 	printf("FAKE = %d \n", ft_printf("Test %p pointeur\n", NULL));
// 	printf("REAL = %d\n", printf("Test %p pointeur\n", NULL));
//     printf("-----\n");

//     // Test de %d et %i (entiers signés)
//     printf("FAKE = %d \n", ft_printf("Test %d entier\n", -12));
// 	printf("REAL = %d\n", printf("Test %d entier\n", -12));
//     printf("-----\n");

//     // Test de %u (entier non signé)
//     printf("FAKE = %d \n", ft_printf("Test %u entier non signé\n", -56));
// 	printf("REAL = %d\n", printf("Test %u entier non signé\n", -56));
//     printf("-----\n");

//     // Test de %x (hexadécimal en minuscule)
// 	printf("FAKE = %d \n", ft_printf("Test %x hexadécimal minuscule\n", 255));
// 	printf("REAL = %d\n", printf("Test %x hexadécimal minuscule\n", 255));
//     printf("-----\n");

//     // Test de %X (hexadécimal en majuscule)
//  printf("FAKE = %d \n", ft_printf("Test %X hexadécimal majuscule\n", 255));
// 	printf("REAL = %d\n", printf("Test %X hexadécimal majuscule\n", 255));
//     printf("-----\n");

//     // Test de %% (pour afficher un caractère %)
//     printf("FAKE = %d \n", ft_printf("Test %% pour afficher pourcentage\n"));
// 	printf("REAL = %d\n", printf("Test %% pour afficher pourcentage\n"));
//     printf("-----\n");

//     // Test avec un format incorrect (format non reconnu)
//     printf("FAKE = %d \n", ft_printf("Test %z format non reconnu\n"));
// 	//printf("REAL = %d\n", printf("Test %z format non reconnu\n"));
//     printf("-----\n");

//     // Test avec un pointeur NULL
//     printf("FAKE = %d \n", ft_printf("Test %p pointeur NULL\n", NULL));
// 	printf("REAL = %d\n", printf("Test %p pointeur NULL\n", NULL));
//     printf("-----\n");
// }