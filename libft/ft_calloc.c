/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:29:48 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:29:50 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	amount;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	amount = count * size;
	if (amount % size != 0 || amount % count != 0)
		return (NULL);
	ptr = (void *)malloc(sizeof(*ptr) * amount);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, amount);
	return (ptr);
}
