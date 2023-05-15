/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:54:44 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 19:54:45 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	if (!s)
		return ;
	while (s[index])
	{
		(*f)(index, &s[index]);
		index++;
	}
}

// void my_func(unsigned int index, char *c) {
//     printf("Character at index %d is %c\n", index, *c);
// }

// int main() {
//     char str[] = "Hello, world!";
//     ft_striteri(str, my_func);
//     return 0;
// }