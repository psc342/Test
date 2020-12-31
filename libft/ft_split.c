/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:03:07 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 11:05:01 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char **allocate(char **ptr, int count_str, char *str, char c)
{
        int i;
        int j;
        int len;

        j = 0;
        i = 0;
        while (count_str > 0 && str[i])
        {
                len = 0;
                while (str[i] == c)
                        i++;
                while (str[i] != c && str[i])
                {
                        len++;
                        i++;
                }
                ptr[j] = (char *)malloc(sizeof(char) * (len + 1));
                if (!ptr[j])
                {
                        while (j >= 0)
                        {
                            free (ptr[j]);
                            j--;
                        }
                        return 0;
                }
                ft_strlcpy(ptr[j], (char *)(str + i - len), len + 1);
                j++;
                count_str--;
        }
        return (ptr);
}

char **ft_split(char const *s, char c)
{
        char **ptr;
        int count_str;
        int i;
        char *str;

        str = (char *)s;
        i = 0;
        count_str = 1;
        
        if (s == 0)
		return (0);
        while (str[i] != '\0')
        {
                if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
                        count_str++;
                i++;
        }
        if (str[0] == c)
        	count_str--;
        ptr = (char **)malloc(sizeof(char *) * count_str);
        if (ptr == 0)
        {
                return (0);
        }
        ptr = allocate(ptr, count_str, str, c);
        return (ptr);
}




/*

Parameters | 
#1. 분할할 문자열. 
#2. 구분 문자.

Return value | 분할로 인한 새 문자열 배열. 할당 실패시 NULL.

External functs. | malloc, free

Description | malloc(3)을 할당하고 구분 문자 'c'를 
사용하여 문자열 's'을 분할하여 얻은 새로운 문자열 배열을 반환. 
그 배열은 NULL로 끝나야 합니다.

*/