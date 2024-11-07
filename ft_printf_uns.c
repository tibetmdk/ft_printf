/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:35:59 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/07 14:35:53 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uns(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_printf_int(n / 10);
		count += ft_printf_int(n % 10);
	}
	else if (n <= 9)
		count += ft_printf_chr(n + '0');
	if (count < 0)
		return (-1);
	return (count);
}
