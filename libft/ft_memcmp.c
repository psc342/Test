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
