/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahamoun <lahamoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:32:37 by lahamoun          #+#    #+#             */
/*   Updated: 2022/11/10 22:32:37 by lahamoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len += 1;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int nb)
{
	int		len;
	char	*str;

	len = ft_len(nb);
	str = malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	while (nb != 0)
	{
		--len;
		str[len] = nb % 10 + 48;
		nb /= 10;
	}
	return (str);
}
