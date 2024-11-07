/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:27:00 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/07 14:43:29 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_putnbr_hex(nbr / 16);
		len += ft_putnbr_hex(nbr % 16);
	}
	else
	{
		if (nbr < 10)
			len += ft_printf_chr('0' + nbr);
		else
			len += ft_printf_chr('a' + nbr - 10);
	}
	return (len);
}

int	ft_printf_ptr(void *ptr)
{
	unsigned long	address;
	int				len;

	len = 0;
	if (!ptr)
	{
		len += ft_printf_str("(nil)");
		return (len);
	}
	address = (unsigned long)ptr;
	len += ft_printf_str("0x");
	len += ft_putnbr_hex(address);
	return (len);
}
