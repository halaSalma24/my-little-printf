/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:35:55 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/30 17:35:55 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_put_address(unsigned long nb, char	*base)
{
	int	bufsize;

	bufsize = 0;
	if (nb >= 16)
	{
		bufsize += ft_put_address(nb / 16, base);
	}
	bufsize += ft_putchar(base[nb % 16]);
	return (bufsize);
}

int	ft_putpointer(void	*ptr)
{
	unsigned long	address;
	int				bufsize;

	address = (unsigned long) ptr;
	bufsize = 0;
	if (!ptr)
		return (ft_putstr("0x0"));
	bufsize += ft_putstr("0x");
	bufsize += ft_put_address(address, "0123456789abcdef");
	return (bufsize);
}
