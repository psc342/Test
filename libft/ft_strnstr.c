/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:03:40 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/01 11:11:02 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay_len;
	size_t	need_len;

	hay_len = ft_strlen(haystack);
	need_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if (hay_len < need_len || len < need_len)
		return (0);
	while(*haystack != '\0')
	{
		if (ft_strncmp((char *)haystack, (char *)needle, len) == 0)
			return ((char *)haystack);
		else
			haystack++;
	}
	return (0);
}