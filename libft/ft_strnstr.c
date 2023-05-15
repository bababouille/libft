/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:33:34 by vade-oli          #+#    #+#             */
/*   Updated: 2023/04/19 18:44:07 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*ndl;
	size_t	i;
	size_t	j;

	hay = (char *)haystack;
	ndl = (char *)needle;
	i = -1;
	if (*ndl == '\0')
		return (hay);
	while (hay[++i] != '\0' && i < len)
	{
		j = 0;
		while (hay[i + j] == ndl[j] && i + j < len)
		{
			if (ndl[j + 1] == '\0')
				return (hay + i);
			j++;
		}
	}
	return (0);
}
// int main()
// {
// 	char	*string = "The quick brown fox jumps over the lazy dog";
// 	char	*substring = "brown";
// 	char	*result = strnstr(string, substring, strlen(string));
// 	if (result != NULL)
// 		printf("Substring found at position %ld\n", result - string);
// 	else
// 		printf("Substring not found\n");

// 	return 0;
// }