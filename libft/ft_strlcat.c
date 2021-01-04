/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:03:22 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/04 15:06:26 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t i;
	size_t j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (((dst_len + j + 1) < dstsize) && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	if (dst_len > dstsize)
		return (src_len + dstsize);
	else
		return (src_len + dst_len);
}
