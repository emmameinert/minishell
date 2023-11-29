/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_null_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:30:01 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:30:03 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*free the str & null terminates the entire str and return it*/
char	*ft_free_null_str(char *str)
{
	if (str)
		free(str);
	str = NULL;
	return (str);
}
