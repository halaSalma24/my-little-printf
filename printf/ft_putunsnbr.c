/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:30:33 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/30 17:30:33 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsnbr(unsigned int nb)
{
	int	bufsize;

	bufsize = 0;
	if (nb >= 10)
	{
		bufsize += ft_putunsnbr(nb / 10);
	}
	bufsize += ft_putchar(nb % 10 + '0');
	return (bufsize);
}
