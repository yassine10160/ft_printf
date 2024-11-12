/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:51:05 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/11 16:51:48 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_count_nb(int n)
{
	int				c;
	unsigned int	nb;

	c = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		c++;
	}
	nb = n;
	while (nb > 0)
	{
		nb /= 10;
		c++;
	}
	return (c);
}

char	*fill_str(char *dest, unsigned int ui, int len, int cpt)
{
	int		i;

	i = len - 1;
	while (cpt < len)
	{
		dest[i] = (ui % 10) + 48;
		ui /= 10;
		i--;
		cpt++;
	}
	dest[cpt] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char			*dest;
	unsigned int	nb;
	int				i;
	int				cpt;

	i = ft_count_nb(n) - 1;
	cpt = 0;
	dest = malloc((ft_count_nb(n) + 1) * sizeof(char));
	if (!dest)
		return (dest);
	if (n < 0)
	{
		n = -n;
		dest[0] = '-';
		cpt++;
	}
	nb = n;
	dest = fill_str(dest, nb, i + 1, cpt);
	return (dest);
}
/*
#include <stdio.h>
int	main()
{	
	int	n = -2147483648;
	printf("%s\n", ft_itoa(n));
}*/