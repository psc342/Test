/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:42 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/04 09:59:08 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*new_dest;
	unsigned char		*new_src;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		new_dest = (unsigned char *)dst;
		new_src = (unsigned char *)src;
		while (len--)
			*new_dest++ = *new_src++;
	}
	else
	{
		new_dest = (unsigned char *)dst + (len - 1);
		new_src = (unsigned char *)src + (len - 1);
		while (len--)
			*new_dest-- = *new_src--;
	}
	return (dst);
}
