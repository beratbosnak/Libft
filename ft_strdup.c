/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:01:37 by bbosnak           #+#    #+#             */
/*   Updated: 2025/06/18 07:56:04 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;
	int		lenght;

	lenght = ft_strlen(s1);
	i = 0;
	dup = malloc(sizeof(char) * lenght + 1);
	if (!dup)
		return (0);
	while (i < lenght)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
