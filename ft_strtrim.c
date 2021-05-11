#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t start;
    size_t finish;

    str = NULL;

    if (s1 != NULL && set == NULL)
        str = ft_strdup(s1);
    else if (s1 != NULL)
    {
    start = 0;
    finish = ft_strlen(s1);
    while(s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
        start++;
    while (finish > 0 && ft_strchr(set, s1[finish]) != NULL)
        finish--;
    str = ft_substr((char*)s1, (unsigned int)start,(size_t)(finish - start + 1));
    }
    return(str);
}