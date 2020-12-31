#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *p;
    int i;
    int j;
    int k;
    int count;

    i = 0;
    k = 0;
    p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (p == 0)
        return (0);
    while(s1[i] != '\0')
    {
        j = 0;
        count = 0;
        while (set[j] != '\0')
        {
            if(s1[i] == set[j])
                count++;
            j++;
        }
        if (count == 0)
        {
            p[k] = s1[i]; 
            k++;
        }
        i++;
    }
    p[k] = 0;
    return (p);
}


/*
Parameters | 
#1. 제거될 문자열. 
#2. 제거할 참조 문자 집합.
Return value | 문자가 제거된 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 문자열의 처음과 끝에서
 'set'에 지정된 문자가 제거된 문자열 's1'의 사본을 반환.
*/