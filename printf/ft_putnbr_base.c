/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:49:56 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/30 17:49:56 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nb, char *base)
{
	unsigned int	nb_base;
	int				bufsize;

	nb_base = (unsigned int) ft_strlen(base);
	bufsize = 0;
	if (nb >= nb_base)
	{
		bufsize += ft_putnbr_base(nb / nb_base, base);
	}
	bufsize += ft_putchar(base[nb % nb_base]);
	return (bufsize);
}
