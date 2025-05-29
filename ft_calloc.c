/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khairallahmawla <khairallahmawla@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:23:22 by khairallahm       #+#    #+#             */
/*   Updated: 2025/05/28 17:15:16 by khairallahm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	if (count == 0 || size == 0)
	{
		ptr = malloc(0);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	if (size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
void main(void) {
	char *mem = ft_calloc(5, sizeof(char));
	if (mem)
	{
		strcpy(mem, "abc");
		printf("%s\n", mem);
		free(mem);
	}
}
*/
