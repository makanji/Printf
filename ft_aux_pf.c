/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:22:12 by makanji           #+#    #+#             */
/*   Updated: 2024/07/10 20:24:42 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen_pf(const char *str)
{
	size_t i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_bzero_pf(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s
	while (n--)
		*ptr = 0
		ptr++
	
}

void *ft_calloc_pf(size_t number, size_t size)
{
	void *dest;

	
	



	
}
