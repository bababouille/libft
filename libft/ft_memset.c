/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:29:53 by vade-oli          #+#    #+#             */
/*   Updated: 2023/04/19 18:42:17 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	char	*string;

	string = (char *)str;
	while (n > 0)
	{
		string[n - 1] = ch;
		n--;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[30] = "ABCD EFGH";
// 	printf("Before memset => %s\n", str);
// 	memset(str, 'string', 8);
// 	printf("\nAfter memset => %s\n", str);
// 	return (0);
// }