/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:52:41 by makanji           #+#    #+#             */
/*   Updated: 2024/07/16 18:54:21 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n, size_t *count)
{
	char	buffer[12];
	int		i;
	long	num;

	num = n;
	i = 11;
	buffer[i] = '\0';
	if (num == 0)
	{
		ft_putchar_pf('0', count);
		return ;
	}
	if (num < 0)
	{
		ft_putchar_pf('-', count);
		num = - (long)n;
	}
	while (num > 0)
	{
		buffer[--i] = (num % 10) + '0';
		num /= 10;
	}
	ft_putstr_pf(&buffer[i], count);
}
