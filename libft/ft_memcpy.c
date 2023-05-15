/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:21:24 by vade-oli          #+#    #+#             */
/*   Updated: 2023/04/29 17:11:32 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destiny;
	unsigned char	*source;

	destiny = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	while (n--)
		*destiny++ = *source++;
	return (dst);
}

// int	main(void)
// {
// 	char	src[something something dark side];
// 	char	dst[20];

// 	memcpy(dst, src, 7);
// 	printf("dst = %source\n", dst);
// 	return (0);
// }