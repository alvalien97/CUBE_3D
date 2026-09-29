/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:09:34 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 12:09:34 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		src_len;
	int		i;
	char	*src_cpy;

	src_len = ft_strlen(s1);
	src_cpy = malloc(sizeof(char) * src_len + 1);
	if (!src_cpy)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		src_cpy[i] = s1[i];
		i++;
	}
	src_cpy[i] = '\0';
	return (src_cpy);
}
