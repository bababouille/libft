/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:08:48 by vade-oli          #+#    #+#             */
/*   Updated: 2023/04/29 17:02:31 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)

{
	unsigned char	*destiny;
	unsigned char	*source;

	destiny = (unsigned char *)str1;
	source = (unsigned char *)str2;
	if (!n)
		return (0);
	while (--n && *destiny == *source)
	{
		destiny++;
		source++;
	}
	return ((int)(*destiny - *source));
}

// int main()
// {
// 	char	str1[] = "Hello, world!";
// 	char	str2[] = "Hello, people!";
// 	int		result = memcmp(str1, str2, strlen(str1));
// 	if (result == 0)
// 		print("The strings are equal.\n");
// 	else if (result < 0)
// 		printf("str1 is less than in str2 \n")
// 	else
// 		printf("tr1 is more than in str2 \n")
// 	return 0;
// }