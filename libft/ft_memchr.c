/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:55:29 by vade-oli          #+#    #+#             */
/*   Updated: 2023/04/29 17:02:05 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;
	size_t	index;

	index = 0;
	string = (char *)s;
	while (index < n)
	{
		if ((unsigned char)string[index] == (unsigned char)c)
			return ((char *)s + index);
		index++;
	}
	return (NULL);
}

// int main()
// {
// 	char	string[] = "Hello World";
// 	char *ptr
// 	ptr = (char*) memchr(string, 'o', strlen(string));
// 	if (ptr != NULL)
// 		printf("Found 'o' at position: %ld\n", ptr - string);
// 	else
// 		printf("'o' not found\n");
// 	return 0;
// }
