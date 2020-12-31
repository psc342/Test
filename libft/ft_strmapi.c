/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:03:33 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:32:24 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *p;
	unsigned int i;

    if (s == 0 || f == 0)
		return (0);
    i = 0;
    p = (char *)malloc( sizeof(char) * (ft_strlen(s) + 1));
    if (p == 0)
        return (0);
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}
/*
Parameters | 
#1. 반복할 문자열. 
#2. 각 문자에 적용할 함수.
Return value | 'f'함수를 연속적으로 적용시킨 문자열.  할당 실패시 NULL.
External functs. | malloc
Description | 문자열 's'의 각 문자에 'f'함수를 연속적으로 적용시킨 새로운 문자열을
 만들기. 새로운 문자열은 malloc(3)을 할당.
*/