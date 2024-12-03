/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:56:13 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/30 15:56:13 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char	*s)
{
	int	i;
	int	bufsize;

	i = 0;
	bufsize = 0;
	if (!s)
	{
		bufsize = write(1, "(null)", 6);
		return (bufsize);
	}
	while (s[i])
	{
		bufsize += write(1, &s[i], 1);
		i++;
	}
	return (bufsize);
}
