/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:29 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:33:11 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;

    while (i < n)
    {
        if (*((unsigned char*)s+i) == (unsigned char)c)
            return ((void*)s+i);
        i++;
    }
    return (0);
}


/*
메모리 블록에서의 문자를 찾는다.

ptr 이 가리키는 메모리의 처음 num 바이트 중에서 처음으로 value 와 일치하는 값의 주소를 리턴한다.

메모리 블록에서 value 와 일치하는 값이 있다면 그 곳의 주소를 리턴하고 값을 찾지 못한다면 NULL 을 리턴한다.
*/