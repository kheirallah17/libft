/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khairallahmawla <khairallahmawla@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:57:42 by khairallahm       #+#    #+#             */
/*   Updated: 2025/05/28 17:20:25 by khairallahm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	if (c == '\0')
		return ;
	write(fd, &c, 1);
}

/*
void main(void) {
	ft_putchar_fd('X', 1); // X
}
*/