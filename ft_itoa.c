/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahamoun <lahamoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:11:10 by lahamoun          #+#    #+#             */
/*   Updated: 2022/11/11 05:44:27 by lahamoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	r;
	char	*str;
	int		i;

	i = ft_len(n);
	r = n;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (r == 0)
		str[0] = '0';
	else if (r < 0)
	{
		r *= -1;
		str[0] = '-';
	}
	while (r != 0)
	{
		str[i - 1] = (r % 10) + '0';
		r /= 10;
		i--;
	}
	return (str);
}
