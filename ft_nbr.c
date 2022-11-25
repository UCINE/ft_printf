/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahamoun <lahamoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:14:47 by lahamoun          #+#    #+#             */
/*   Updated: 2022/11/10 22:14:47 by lahamoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr(int nb)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(nb);
	len += ft_string(str);
	free(str);
	return (len);
}
