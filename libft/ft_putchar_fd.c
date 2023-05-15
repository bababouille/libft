/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-oli <vade-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:52:01 by vade-oli          #+#    #+#             */
/*   Updated: 2023/05/15 19:52:12 by vade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
//     char c = 'A';
//     int fd = STDOUT_FILENO; ng

//     ft_putchar_fd(c, fd);

//     return (0);
// }

// instead of 1 makes the code more readable, portable, and robust,