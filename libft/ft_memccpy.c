#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
    i = 0;

    while (i < n)
    {
        *((char*)dst + i) = *((unsigned char*)src+i);
        if (*((unsigned char*)src+i) == (unsigned char)c)
            return (dst + i+1);
        i++;
    }
    return (0);
}



/*
n바이트의 데이터를 dest에 복제할 때에 src 데이터에서 문자 c를 만나면 c까지 복제하고 복제를 중단한다.

복제된 dest변수에서 복제가 끝난 다음 번지를 return 한다. 만약 문자 c를 만나지 않았다면, n바이트를 복제하고 NULL을 return 한다.
*/