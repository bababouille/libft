/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:38:25 by vade-oli          #+#    #+#             */
/*   Updated: 2023/04/19 18:43:05 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	const char		*b;
	char			*s;
	unsigned char	c1;

	c1 = c;
	s = (char *)str;
	i = ft_strlen(s);
	b = (s + i);
	while (i >= 0)
	{
		if (*b == c1)
			return ((char *)b);
		b--;
		i--;
	}
	if (c1 == '\0')
		return ((char *)b);
	return (0);
}
