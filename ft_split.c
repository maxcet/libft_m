#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char *str;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
		ft_bzero(str, size);
	return (str);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			i++;
			j++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (j);
}

static char	*ft_add_words(size_t *i, const char *s, char c)
{
	size_t	size;
	size_t	j;
	char	*word;

	size = *i;
	j = 0;
	while (s[size] && s[size] != c)
		size++;
	word = 	ft_strnew(size - (*i));
	if (word)
	{
		while (*i < size)
		{
			word[j] = s[*i];
			j++;
			(*i)++;
		}
		return (word);
	}
	return (0);
}
char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	count_words;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	words = NULL;
	count_words = ft_count_words(s, c);
	if (s)
		words = (char**)malloc(sizeof(char*)*(ft_count_words(s,c) + 1));
	if (words)
	{
		while (j < count_words)
		{
			while (s[i] == c)
				i++;
			if (s[i] != c && s[i])
				words[j++] = ft_add_words(&i, s, c);
		}
		words[j] = 0;
		return (words);
	}
	return (0);
}