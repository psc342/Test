/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:42 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:32:54 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
        char *tmp;
        const char *s;

        if (dst == src || len == 0)
	    	return (dst);
        if (dst <= src)
        {
            tmp = dst;
            s = src;
            while (len--)
             *tmp++ = *s++;
        }
        else
        {
            tmp = dst;
            tmp += len;
            s = src;
            s += len;
            while (len--)
            {
                *--tmp = *--s;
            }  
        }
        return dst;
}

/*
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    i = 0;

    while (i < n)
    {
        *((char*)dst + i) = *((char*)src+i);
        i++;
    }
    return (dst);
}
*/
/*
                 * src 의 주소가 dest 보다 큰 값이면,
                 * src 의 처음 부터 count 만큼 dest 에 복사한다.
                 * src를 한 byte씩 복사하더라도 dest 보다 큰 위치에 있기 때문에,
                 * 오버랩되더라도 src 를 모두 정상적으로 dest에 복사할수 있다.
                 */

/*
                 * src의 주소가 dest 보다 작은 값이면,
                 * src 의 마지막 데이터부터 한바이트씩 dest의 마지막 바이트부터
                 * 순서대로 복사한다.
                 */




/*
src메모리 영역에서 dest 메모리 영역으로 n 바이트 만큼 복사한다. 
이 때, src 배열은 src와 dest의 메모리 영역과 겹치지 않는 메모리 영역부터 먼저 복사한다.
*/