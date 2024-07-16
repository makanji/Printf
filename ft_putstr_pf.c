/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:03:11 by makanji           #+#    #+#             */
/*   Updated: 2024/07/16 18:55:51 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *counter)
{
	if (!str)
	{
		ft_putstr_pf("(null)", counter);
		return ;
	}
	while (*str)
	{
		ft_putchar_pf(*str, counter);
		str++;
	}
}
