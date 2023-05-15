/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:56:35 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 19:56:51 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const *set, char c)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		lenght;
	int		index;
	int		n;

	index = 0;
	if (!s1)
		return (NULL);
	lenght = ft_strlen(s1);
	while (ft_isset(set, s1[index]) && s1)
		index++;
	while (ft_isset(set, s1[lenght - 1]) && index < lenght)
		lenght--;
	string = (char *)malloc(((lenght - index) + 1) * sizeof(char));
	if (!string)
		return (NULL);
	n = 0;
	while (index < lenght && s1[index])
		string[n++] = s1[index++];
	string[n] = '\0';
	return (string);
}

// int main(void)
// {
// 	char	*str = "   \t\t Hello, World!   \t\t";
// 	char	*set = " \t";

// 	char	*trimmed_str = ft_strtrim(str, set);

// 	printf("Original string: %s\n", str);
// 	printf("Trimmed string: %s\n", trimmed_str);

// 	free(trimmed_str);

// 	return(0);
// }