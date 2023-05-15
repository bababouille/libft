/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:27:15 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 20:10:22 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_alenght(int a)
{
	size_t	lenght;

	lenght = 0;
	if (a == 0)
		lenght++;
	if (a < 0)
	{
		a *= -1;
		lenght++;
	}
	while (a)
	{
		a /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int a)
{
	char		*string;
	size_t		lenght;
	long int	number;

	number = a;
	lenght = ft_alenght(number);
	string = (char *)malloc(lenght * sizeof(char) + 1);
	if (!string)
		return (NULL);
	if (a == 0)
		string[0] = 48;
	string[lenght--] = '\0';
	if (number < 0)
	{
		string[0] = '-';
		number *= -1;
	}
	while (number > 0)
	{
		string[lenght--] = 48 + number % 10;
		number /= 10;
	}
	return (string);
}

// int main(void)
// {
//     int number = -34932;
//     char *string = ft_itoa(number);
//     printf("%s\n", string);
// 	int number2 = 0;
// 	char *string2 = ft_itoa(number2);
// 	printf("%s\n", string2);
//     free(string2);
//     return (0);
// }