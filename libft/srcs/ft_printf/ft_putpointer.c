/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:09:34 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 12:09:34 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	ft_printpointer(unsigned long long n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_printpointer(n / 16);
		i += ft_printpointer(n % 16);
	}
	else
	{
		if (n < 10)
			i += ft_putchar(n + '0');
		else
			i += ft_putchar(n + 'a' - 10);
	}
	return (i);
}

int	ft_putpointer(unsigned long long n)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_printpointer(n);
	return (i);
}
