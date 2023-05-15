/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:07:08 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 20:07:08 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)src;
	while (dest[i] != '\0' && i < n)
		i++;
	while (s[j] != '\0' && (i + j + 1) < n)
	{
		dest[i + j] = s[j];
		j++;
	}
	if (i < n)
		dest[i + j] = '\0';
	return (i + ft_strlen(s));
}
