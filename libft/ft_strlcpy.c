/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:42:14 by vade-oli          #+#    #+#             */
/*   Updated: 2023/04/29 17:03:38 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize)
	{
		i = 0;
		while (src[i] && (i < (dstsize - 1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	const char	*src;
// 	size_t		num_copied;

// 	src = "iVBORw0KGgoAAAANSUhEUgAALGPC/xhBQAAAAFzUkdC..." char dst[1024];
// 	// Copy up to 1023 characters from src to dst (including null terminator)
// 	num_copied = strlcpy(dst, src, sizeof(dst));
// 	// Check if dst was truncated
// 	if (num_copied >= sizeof(dst))
// 	{
// 		printf("Destination buffer was truncated!\n");
// 	}
// 	// Print the number of characters copied and the contents of dst
// 	printf("Copied %zu characters:\n%s\n", num_copied, dst);
// 	return (0);
// }