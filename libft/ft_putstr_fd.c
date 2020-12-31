#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == 0 || fd < 0)
		return (void)0;
    while (*s != '\0')
    {
        write(fd, s, 1);
        s++;
    }
}
/*
Parameters | #1. 출력할 문자열. #2. 쓰여질 파일디스크립터.
Return value | None
External functs. | write
Description | 문자열 's'을 주어진 파일디스크립터로 출력.
*/