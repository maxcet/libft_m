#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>

# define FT_MAX(A, B) (((A) > (B)) ? (A) : (B))

# define FT_ABS(X) (((X) < 0) ? (-(X)) : (X))

# define FT_ULONG_MAX	((unsigned long)(~0L))
# define FT_LONG_MAX	((long)(FT_ULONG_MAX >> 1))
# define FT_LONG_MIN	((long)(~FT_LONG_MAX))

# define FT_UINT_MAX	((unsigned)(~0L))
# define FT_INT_MAX		((int)(FT_UINT_MAX >> 1))
# define FT_INT_MIN		((int)(~FT_INT_MAX))

typedef struct		s_list
{
	void *content;
	size_t			content_size;
	struct s_list *next;
}					t_list;

int		ft_atoi(const char* str);
int		ft_isspace(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char* s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_min(size_t a, size_t b);
size_t	ft_max(int a, int b);

void	ft_memccpy(void* dest, const void* source, int sascii, size_t len);
void	*ft_memchr(const void* dest, int sascii, size_t len);
void	ft_memcmp(const void* dest, const void* str, size_t len);
void	ft_memcpy(void* dest, const void* source, size_t len);
void	ft_memmove(void* dest, const void* source, size_t len);
void	ft_memset(void* dest, int n, size_t len);
void	*ft_memalloc(size_t size);
void	ft_bzero(void* str, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char* str);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	**ft_split(char const *s, char c);


#endif