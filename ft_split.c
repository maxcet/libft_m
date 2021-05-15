#include "libft.h"

static char	**ft_malloc_error(char **words)
{
	unsigned int	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

static unsigned int	ft_word_count(char const *s, char c)
{
	unsigned int	index;
	unsigned int	count;

	if (!s[0])
		return (0);
	index = 0;
	count = 0;
	while (s[index] && s[index] == c)
		index++;
	while (s[index])
	{
		if (s[index] == c)
		{
			count++;
			while (s[index] && s[index] == c)
				index++;
			continue ;
		}
		index++;
	}
	if (s[index - 1] != c)
		count++;
	return (count);
}

static void	ft_get_word(char **new_word, unsigned int *word_len, char c)
{
	unsigned int	index;

	*new_word += *word_len;
	*word_len = 0;
	index = 0;
	while (**new_word && **new_word == c)
		(*new_word)++;
	while ((*new_word)[index])
	{
		if ((*new_word)[index] == c)
			return ;
		(*word_len)++;
		index++;
	}
}

static char	**ft_malloc(size_t size)
{
	char	**dest;

	dest = (char **)malloc(sizeof(char *) * size);
	if (!dest)
		return (NULL);
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char			**words;
	char			*new_word;
	unsigned int	word_len;
	unsigned int	word_count;
	unsigned int	index;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	words = ft_malloc(word_count + 1);
	index = 0;
	new_word = (char *)s;
	word_len = 0;
	while (index < word_count)
	{
		ft_get_word(&new_word, &word_len, c);
		words[index] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!(words[index]))
			return (ft_malloc_error(words));
		ft_strlcpy(words[index], new_word, word_len + 1);
		index++;
	}
	words[index] = NULL;
	return (words);
}
