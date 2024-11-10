/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:56:49 by yafahfou          #+#    #+#             */
/*   Updated: 2024/11/10 18:14:03 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

unsigned int	ft_count_ui(unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_fill_str(char *dest, unsigned int ui, int len, int cpt)
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

char	*ft_uitoa(unsigned int n)
{
	char			*dest;
	int				i;
	int				cpt;

	i = ft_count_ui(n);
	cpt = 0;
	dest = malloc((ft_count_ui(n) + 1) * sizeof(char));
	if (!dest)
		return (dest);
	dest = ft_fill_str(dest, n, i, cpt);
	return (dest);
}
/*
#include <stdio.h>
int	main()
{	
	unsigned int	n = -1;
	printf("%s\n", ft_uitoa(n));
}*/