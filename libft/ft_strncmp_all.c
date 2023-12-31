/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:32:04 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:32:07 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*returns 0 if s1 and s2 is same, if not returns something that is not 0*/
int	ft_strncmp_all(const char *s1, const char *s2)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			index;
	size_t			len;

	if (s1 == NULL || s2 == NULL)
		return (-1);
	index = 0;
	len = ft_strlen(s1);
	if (len == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (ptr1 == ptr2)
		return (0);
	if (ft_strlen(s2) != len || !s1)
		return (1);
	while ((ptr1[index] != '\0' || ptr2[index] != '\0') && index < len)
	{
		if (ptr1[index] != ptr2[index])
			return (ptr1[index] - ptr2[index]);
		index++;
	}
	return (0);
}
