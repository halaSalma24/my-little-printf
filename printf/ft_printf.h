/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slakhrou <slakhrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:44:55 by slakhrou          #+#    #+#             */
/*   Updated: 2024/11/30 15:44:55 by slakhrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_putchar(int c);
int	ft_putstr(char	*s);
int	ft_putnbr(int c);
int	ft_strlen(const char	*s);
int	ft_putunsnbr(unsigned int nb);
int	ft_putpointer(void	*ptr);
int	ft_putnbr_base(unsigned int nb, char	*base);
int	ft_printf(const char	*format, ...);

#endif
