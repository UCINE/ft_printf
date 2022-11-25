/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahamoun <lahamoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:32:15 by lahamoun          #+#    #+#             */
/*   Updated: 2022/11/10 22:32:15 by lahamoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_hexa(unsigned int nb, const char c);
char	*ft_itoa(int nb);
int		ft_nbr(int nb);
int		ft_percentage(void);
int		ft_printf(const char *str, ...);
int		ft_hexa_ptr_len(unsigned long nb);
int		ft_ptr(unsigned long nb);
int		ft_putchar(const char c);
int		ft_string(const char *str);
int		ft_unsigned(unsigned int nb);
char	*ft_utoa(unsigned int nb);
void	ft_char(const char c);

#endif