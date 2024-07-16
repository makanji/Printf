/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:31 by makanji           #+#    #+#             */
/*   Updated: 2024/07/16 18:59:30 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(void *ptr)
{
	char			*str;
	unsigned long	ptr_address;
	size_t			count;

	count = 0;
	if (ptr == NULL)
	{
		ft_putstr_pf("(nil)", &count);
		return ((int)count);
	}
	ptr_address = (unsigned long)ptr;
	ft_putstr_pf("0x", &count);
	str = ft_aux_pf(ptr_address, HEX_LOW_BASE);
	ft_putstr_pf(str, &count);
	free(str);
	return ((int)count);
}
