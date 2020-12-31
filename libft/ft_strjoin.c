#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *p;
    int s1_len;
    int s2_len;

    if (s1 == 0 || s2 == 0)
        return(0);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    p = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (p == 0)
        return (0);
    ft_strlcpy(p, s1, s1_len + 1);
	ft_strlcat(p + (s1_len), s2, s2_len + 1);
    return (p);
}

/*

while(i < s1_len)
        p[i++] = *s1++;
    while(i < s1_len + s2_len)
        p[i++] = *s2++;
    p[i] = '\0';

Parameters | 
#1. 앞에 올 문자열. 
#2. 뒤에 올 문자열.
Return value | 새로운 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 새로운 문자열을 반환.
 새로운 문자열은 문자열 's1'과 문자열 's2'의 연결된 형태.
*/