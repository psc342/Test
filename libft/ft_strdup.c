#include "libft.h"

 char * ft_strdup(const char *s1)
 {
     int i;
     int s1_len;
     char *p;
     
     i = 0;
     s1_len = ft_strlen(s1);
     p = (char*)malloc((s1_len+1) * sizeof(char));
     if (p == 0)
        return (p);
     while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
     p[i] = '\0';
     return(p);
 }