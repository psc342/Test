#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    if (fd < 0)
		return (void)0;
	write(fd, &c, 1);
}

/*
Parameters | #1. 출력할 문자. #2. 쓰여질 파일디스크립터.
Return value | None
External functs. | write
Description | 문자 'c'를 주어진 파일디스크립터로 출력.
*/