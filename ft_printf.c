/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahamoun <lahamoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 01:03:28 by lahamoun          #+#    #+#             */
/*   Updated: 2022/11/14 00:34:45 by lahamoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		len += ft_nbr(va_arg(args, int));
	else if (c == 's')
		len += ft_string(va_arg(args, char *));
	else if (c == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		len += ft_ptr(va_arg(args, unsigned long));
	else if (c == 'x' || c == 'X')
		len += ft_hexa(va_arg(args, unsigned long), c);
	else if (c == '%')
		len += ft_percentage();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		if (!str[i])
			return (len);
		i++;
	}
	va_end(args);
	return (len);
}
