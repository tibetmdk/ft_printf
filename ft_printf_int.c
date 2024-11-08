/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:08:53 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/09 02:14:02 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int number)
{
	int	len;

	len = 0;
	if (number == INT_MIN)
		return (ft_printf_str("-2147483648"));
	if (number < 0)
	{
		len += ft_printf_chr('-');
		number *= -1;
	}
	if (number < 10)
		len += ft_printf_chr(number + '0');
	else
	{
		len += ft_printf_int(number / 10);
		len += ft_printf_chr(number % 10 + '0');
	}
	return (len);
}
