/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:31:52 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:31:54 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	if (dstsize)
	{
		if (src_len >= dstsize)
		{
			len = dstsize - 1;
		}
		else
		{
			len = src_len;
		}
		ft_memcpy((char *)dst, (char *)src, len);
		dst[len] = '\0';
	}
	return (src_len);
}
