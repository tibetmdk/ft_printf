/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:57:01 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/07 14:39:55 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
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
