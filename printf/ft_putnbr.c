/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:03:44 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/27 21:03:44 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int				bufsize;

	bufsize = 0;
	if (nb == INT_MIN)
	{
		bufsize = ft_putstr("-2147483648");
		return (bufsize);
	}
	if (nb < 0)
	{
		bufsize = ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
	{
		bufsize += ft_putnbr(n / 10);
	}
	bufsize += ft_putchar(n % 10 + '0');
	return (bufsize);
}
