/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:40:49 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 21:40:49 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s) + 1;
	if (!s)
		return (NULL);
	dup = malloc(len);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len);
	return (dup);
}
