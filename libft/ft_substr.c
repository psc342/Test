/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:03:52 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:32:25 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

    if (s == 0 || len == 0)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(char) * (len + 1));
    if (p == 0)
        return (0);
	ft_strlcpy(p, s + start, len+1);
	return (p);
}

/*
Parameters | 
#1. 하위 문자열을 만들 문자열. 
#2. 문자열 's'에 있는 하위 문자열의 시작 인덱스. 
#3. 하위 문자열의 최대 길이.
Return value | 하위 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 문자열 's'에서 하위 문자열을 반환. 
하위 문자열은 인덱스 'start'에서 시작되며 최대 크기는 'len'이다.
*/