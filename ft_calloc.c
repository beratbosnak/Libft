/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:55:28 by bbosnak           #+#    #+#             */
/*   Updated: 2025/06/18 07:28:05 by bbosnak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	if (count == 0 || size == 0)
		return (malloc(1));
	if (count > 65535 || size > 65535)
		return (NULL);
	dst = malloc(count * size);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, count * size);
	return (dst);
}
