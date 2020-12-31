/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:33 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:33:10 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;

    while (i < n)
    {
		if (*(char*)s1 != *(char*)s2)
			return (unsigned char)*(char*)s1 - (unsigned char)*(char*)s2;
		s1++;
		s2++;
        i++;
	}
    return (0);
}
