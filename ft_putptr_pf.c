/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:24:31 by makanji           #+#    #+#             */
/*   Updated: 2024/07/11 21:26:27 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_putptr_pf(void *ptr)
{
	char			*str;
	unsigned long	ptr_address;
	int				count;

	count = 0;
	ptr_address = (unsigned long)ptr;
	count += ft_putstr_pf("0x");
	str = ft_aux_pf(ptr_address, HEX_LOW_BASE);
	count += ft_putstr_pf(str);
	free(str);
	return (count);
}
