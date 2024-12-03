/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:38:47 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/30 15:38:47 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	in_set(char c, char	*set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	format_type(const char s, va_list args)
{
	int	bufsize;

	bufsize = 0;
	if (s == 'c')
		bufsize += ft_putchar(va_arg(args, int));
	else if (s == 's')
		bufsize += ft_putstr(va_arg(args, char *));
	else if (s == 'p')
		bufsize += ft_putpointer(va_arg(args, void *));
	else if (s == 'd' || s == 'i')
		bufsize += ft_putnbr(va_arg(args, int));
	else if (s == 'u')
		bufsize += ft_putunsnbr(va_arg(args, unsigned int));
	else if (s == 'x')
		bufsize += ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789abcdef");
	else if (s == 'X')
		bufsize += ft_putnbr_base(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	else if (s == '%')
		bufsize += ft_putchar('%');
	else if (!in_set(s, "cspdiuxX%"))
		bufsize += ft_putchar(s);
	return (bufsize);
}

int	ft_printf(const char	*format, ...)
{
	va_list	arguments;
	int		i;
	int		bufsize;

	i = 0;
	bufsize = 0;
	va_start(arguments, format);
	if (!format)
		return (ft_strlen(format));
	if (write(1, 0, 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				bufsize += format_type(format[++i], arguments);
		}
		else
			bufsize += ft_putchar(format[i]);
		i++;
	}
	va_end(arguments);
	return (bufsize);
}
