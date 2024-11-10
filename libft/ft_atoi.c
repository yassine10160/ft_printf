/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:58:06 by yassine           #+#    #+#             */
/*   Updated: 2024/11/06 14:19:59 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	long	total;
	long	sign;

	i = 0;
	total = 0;
	sign = 1;
	while (str && (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r')))
		i++;
	if (str && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str && ('0' <= str[i] && str[i] <= '9'))
	{
		total = (total * 10) + (str[i] - 48);
		if ((total > INT_MAX || total < INT_MIN) && total != 2147483648)
			return (0);
		i++;
	}
	return (total * sign);
}
