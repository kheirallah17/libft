/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khairallahmawla <khairallahmawla@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 20:30:05 by khairallahm       #+#    #+#             */
/*   Updated: 2025/05/28 17:19:45 by khairallahm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest == NULL && source == NULL)
		return (NULL);
	if (dest < source)
	{
		return (ft_memcpy(dest, source, len));
	}
	else
	{
		while (len--)
		{
			dest[len] = source[len];
		}
	}
	return (dst);
}

/*
void main(void) {
	char s[] = "abcdef";
	ft_memmove(s + 2, s, 4);
	printf("%s\n", s); // ababcd
}
*/