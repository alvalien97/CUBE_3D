/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:09:34 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 12:09:34 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*clone;

	i = 0;
	clone = (unsigned char *) s;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return (&clone[i]);
		i++;
	}
	return (NULL);
}
