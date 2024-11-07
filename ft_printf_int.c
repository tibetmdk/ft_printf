/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:08:53 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/07 14:34:33 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int number)
{
	int	count;
	
	count = 0;
	if (number < 0)
	{
		count += ft_printf_chr('-');
		number *= -1;
	}
	if (number < 10)
		count += ft_printf_chr(number + '0');
	else
	{
		count += ft_printf_int(number / 10);
		count += ft_printf_chr(number % 10 + '0');
	}
	return (count);
}
