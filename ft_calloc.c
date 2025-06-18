/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:39:42 by bbosnak           #+#    #+#             */
/*   Updated: 2022/12/26 18:39:43 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
