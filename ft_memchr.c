/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khairallahmawla <khairallahmawla@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:43:19 by khairallahm       #+#    #+#             */
/*   Updated: 2025/05/28 17:18:29 by khairallahm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(&str[i]));
		i++;
	}
	return (NULL);
}

/*
void main(void) {
	char s[] = "abcde";
	char *res = ft_memchr(s, 'c', 5);
	printf("%s\n", res); // cde
}
*/