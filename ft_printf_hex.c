/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:23:31 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/07 14:34:16 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned int nbr, const char *hex_base)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_putnbr_hex(nbr / 16, hex_base);
		len += ft_putnbr_hex(nbr % 16, hex_base);
	}
	else
	{
		len += ft_printf_chr(hex_base[nbr]);
	}
	return (len);
}

int	ft_printf_hex(unsigned int nbr, int uppercase)
{
	if (uppercase)
		return (ft_putnbr_hex(nbr, HEX_UPPER));
	else
		return (ft_putnbr_hex(nbr, HEX_LOWER));
}
