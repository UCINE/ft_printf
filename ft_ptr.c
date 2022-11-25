/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahamoun <lahamoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:33:30 by lahamoun          #+#    #+#             */
/*   Updated: 2022/11/10 22:33:30 by lahamoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr(unsigned long nb)
{
	if (nb < 10)
		ft_char(nb + 48);
	else if (nb >= 10 && nb <= 15)
		ft_char(nb - 10 + 97);
	else if (nb > 15)
	{
		ft_putptr(nb / 16);
		ft_putptr(nb % 16);
	}
}

int	ft_ptr(unsigned long nb)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (nb == 0)
	{
		len += write(1, "0", 1);
	}
	else
		ft_putptr(nb);
	len += ft_hexa_ptr_len(nb);
	return (len);
}
