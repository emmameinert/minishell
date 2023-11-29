/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:30:35 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:30:38 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*dest;

	str = (char *)src;
	dest = (char *)dst;
	if (!str && !dest && n > 0)
		return (NULL);
	while (n-- > 0)
		*(dest++) = *(str++);
	dest = NULL;
	str = NULL;
	return (dst);
}
