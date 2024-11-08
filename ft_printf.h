/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:57:01 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/09 02:13:08 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# define INT_MIN -2147483648

# include <unistd.h>
# include <stdarg.h>

int		ft_printf_chr(int c);
int		ft_printf_int(int number);
int		ft_printf_hex(unsigned int nbr, int uppercase);
int		ft_printf_uns(unsigned int n);
int		ft_printf_str(char *str);
int		ft_printf_ptr(void *ptr);
int		ft_printf(const char *str, ...);

#endif
