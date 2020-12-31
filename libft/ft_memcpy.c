/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:37 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:32:56 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    i = 0;

    if (dst == 0 && src == 0)
	return (0);

    while (i < n)
    {
        *((char*)dst + i) = *((char*)src+i);
        i++;
    }
    return (dst);
}


/*
memcpy() 함수는 src 메모리 영역에서 dst 메모리 영역으로 n byte 만큼 복사합니다.
메모리 영역은 겹치면 안됩니다. 만약 src 와 dst 메모리 영역이 겹친다면 memmove 함수를 사용하세요.

dst의 포인터를 반환
*/