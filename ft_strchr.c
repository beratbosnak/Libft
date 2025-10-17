/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:40:37 by bbosnak           #+#    #+#             */
/*   Updated: 2025/06/18 07:55:58 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	target;

	str = (char *)s;
	target = (unsigned char)c;
	while (*str != target)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
