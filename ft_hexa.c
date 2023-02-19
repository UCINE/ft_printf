/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahamoun <lahamoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:23:09 by lahamoun          #+#    #+#             */
/*   Updated: 2022/11/11 05:37:31 by lahamoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned int nb, const char c)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, c);
		ft_puthex(nb % 16, c);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else if (nb >= 10 && nb <=  15)
		{
			if (c == 'x')
				ft_putchar(nb - 10 + 'a');
			else if (c == 'X')
				ft_putchar(nb - 10 + 'A');
		}
	}
}

int	ft_hexa(unsigned int nb, const char c)
{
	if (nb == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(nb, c);
	return (ft_hexa_ptr_len(nb));
}
