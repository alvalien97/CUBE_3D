/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:09:34 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 12:09:34 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_parse_formatters(const char *format, int i, va_list args)
{
	int	count;

	count = 0;
	if (format[i] != '%')
	{
		if (format[i] == 's')
			count += ft_putstr(va_arg(args, char *));
		else if (format[i] == 'd' || format[i] == 'i')
			count += ft_putnbr(va_arg(args, int));
		else if (format[i] == 'c')
			count += ft_putchar(va_arg(args, int));
		else if (format[i] == 'u')
			count += ft_putunsigned(va_arg(args, unsigned int));
		else if (format[i] == 'x')
			count += ft_puthexnbr(va_arg(args, unsigned int), 0);
		else if (format[i] == 'X')
			count += ft_puthexnbr(va_arg(args, unsigned int), 1);
		else if (format[i] == 'p')
			count += ft_putpointer(va_arg(args, unsigned long long));
		else
			count += ft_putchar(format[i]);
	}
	else
		count += ft_putchar(format[i]);
	return (count);
}
