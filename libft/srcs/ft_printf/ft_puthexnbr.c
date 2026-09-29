/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:09:34 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 12:09:34 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_puthexnbr(unsigned int n, int is_upper)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthexnbr(n / 16, is_upper);
		i += ft_puthexnbr(n % 16, is_upper);
	}
	else
	{
		if (n < 10)
			i += ft_putchar(n + '0');
		else
		{
			if (is_upper)
				i += ft_putchar(ft_toupper(n + 'a' - 10));
			else
				i += ft_putchar(ft_tolower(n + 'a' - 10));
		}
	}
	return (i);
}
