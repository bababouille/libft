/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <@cambier.vo@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:57:01 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 21:28:14 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	sourcelenght;
	char	*string;

	if (!s)
		return (NULL);
	sourcelenght = ft_strlen((char *)s);
	if (start > sourcelenght)
		return (ft_calloc(1, 1));
	if (start + len > sourcelenght)
		len = sourcelenght - start;
	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (NULL);
	index = 0;
	while (s[start + index] && index < len && start < sourcelenght)
	{
		string[index] = s[start + index];
		index++;
	}
	string[index] = '\0';
	return (string);
}

// int main(void)
// {
// 	char	*str = "The quick brown fox jumps over the lazy dog";
// 	char	*substr = ft_substr(str, 4, 5);
// 	printf("%s\n", substr); //output: "quick"
// 	free(substr);
// 	return 0;
// }