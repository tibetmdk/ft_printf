/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:56:51 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/07 14:37:15 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	choose_format(char c, va_list arguments)
{
	if (c == 'c')
		return (ft_printf_chr(va_arg(arguments, int)));
	if (c == 's')
		return (ft_printf_str(va_arg(arguments, char *)));
	if (c == 'd' || c == 'i')
		return (ft_printf_int(va_arg(arguments, int)));
	if (c == 'x')
		return (ft_printf_hex(va_arg(arguments, unsigned int), 0));
	if (c == 'X')
		return (ft_printf_hex(va_arg(arguments, unsigned int), 1));
	if (c == 'p')
		return (ft_printf_ptr(va_arg(arguments, void *)));
	if (c == 'u')
		return (ft_printf_uns(va_arg(arguments, unsigned int)));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arguments;
	int		len;
	int		i;

	len = 0;
	va_start(arguments, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			len += choose_format(str[++i], arguments);
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(arguments);
	return (len);
}
