/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvalien <alvalien@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:09:34 by alvalien          #+#    #+#             */
/*   Updated: 2026/01/14 12:09:34 by alvalien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	stop;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	stop = (size_t) ft_strlen(s1);
	while (s1[start] && ft_is_set(s1[start], set))
		start++;
	while (stop > start && ft_is_set(s1[stop - 1], set))
		stop--;
	str = ft_substr(&s1[start], 0, stop - start);
	return (str);
}
