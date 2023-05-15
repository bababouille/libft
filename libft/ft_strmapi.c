/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:55:46 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 19:55:58 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		lenght;
	char	*string;

	index = 0;
	if (!s)
		return (NULL);
	lenght = ft_strlen(s);
	string = malloc((lenght + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[lenght] = '\0';
	while (s[index])
	{
		string[index] = (*f)(index, s[index]);
		index++;
	}
	return (string);
}

// char	my_function(unsigned int index, char c)
// {
// 	if (index % 2 == 0)
// 		return (c + 1);
// 	else
// 		return (c - 1);
// }

// int main(void)
// {
// 	char *result = ft_strmapi("hello world", &my_function);
// 	if (!result)
// 		return (1);
// 	printf("%s\n", result); // prints "ifmmp!xpsme"
// 	free(result);
// 	return (0);
// }