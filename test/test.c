//created by ffarkas

#include <stdio.h>
#include "libft.h"

void	ft_testatoi()
{
	printf("int ft_atoi(const char *ptr)\n");
	char num[10];
	scanf("%10s", &num[0]);
	printf("Output: %d", ft_atoi(num));
}

void	ft_testbzero()
{
	printf("ft_bzero(void *s, size_t n)\n");
	char s[10];
	size_t n;
	scanf("%10s %zu", &s[0], &n);
	printf("Input string: %s\n", s);
	ft_bzero(s, n);
	printf("Output string: %s\n", s);
}

void	ft_testcalloc()
{
	printf("void *ft_calloc(size_t n, size_t size)\n");
	char *s;
	size_t n;
	size_t size;
	scanf("%zu %zu", &n, &size);
	s = ft_calloc(n, size);
	if (s == 0)
		printf("Memory allocation failed.\n");
	else
		printf("Memory allocation successfull.\n");
}

void	ft_testisalnum()
{
	printf("int ft_isalnum(int c)\n");
	int c;
	scanf("%d", &c);
	printf("Output: %d\n", ft_isalnum(c));
}

void	ft_testisalpha()
{
	printf("int ft_isalpha(int c)\n");
	int c;
	scanf("%d", &c);
	printf("Output: %d\n", ft_isalpha(c));
}

void	ft_testisascii()
{
	printf("int ft_isascii(int c)\n");
	int c;
	scanf("%d", &c);
	printf("Output: %d\n", ft_isascii(c));
}

void	ft_testisdigit()
{
	printf("int ft_isdigit(int c)\n");
	int c;
	scanf("%d", &c);
	printf("Output: %d\n", ft_isdigit(c));
}

void	ft_testisprint()
{
	printf("int ft_isprint(int c)\n");
	int c;
	scanf("%d", &c);
	printf("Output: %d\n", ft_isprint(c));
}

void	ft_testitoa()
{
	printf("char *ft_itoa(int n)\n");
	int c;
	scanf("%d", &c);
	printf("Output: %s\n", ft_itoa(c));
}

void	ft_testmemchr()
{
	printf("void *ft_memchr(const void *buf, int ch, size_t length)\n");
	char buf[20];
	int ch;
	size_t length;
	scanf("%20s %d %zu", &buf[0], &ch, &length);
	char *out;
	out = ft_memchr(buf, ch, length);
	printf("Output: %s\n", out);
}

void	ft_testmemcmp()
{
	printf("int ft_memcmp(const void *s1, const void *s2, size_t length)\n");
	char s1[20];
	char s2[20];
	size_t length;
	scanf("%20s %20s %zu", &s1[0], &s2[0], &length);
	int out = ft_memcmp(s1, s2, length);
	if (out == 0)
		printf("s1 == s2 (character %zu)\n", length);
	else if (out > 0)
		printf("s1 > s2 (character %zu)\n", length);
	else
		printf("s1 < s2 (character %zu)\n", length);
}

void	ft_testmemcpy()
{
	printf("void *ft_memcpy(void *dst, const void *src, size_t length)\n");
	char dst[20];
	char src[20];
	size_t length;
	scanf("%20s %20s %zu", &dst[0], &src[0], &length);
	ft_memcpy(dst, src, length);
	printf("Output: %s\n", src);
}

void	ft_testmemmove()
{
	printf("void *ft_memmove(void *dst, const void *src, size_t length)\n");
	char dst[20];
	char src[20];
	size_t length;
	scanf("%20s %20s %zu", &dst[0], &src[0], &length);
	ft_memcpy(dst, src, length);
	printf("Output: %s\n", src);
}

void	ft_testmemset()
{
	printf("void *ft_memset(void *dst, int c, size_t length)\n");
	char dst[20];
	int c;
	size_t length;
	scanf("%20s %d %zu", &dst[0], &c, &length);
	ft_memset(dst, c, length);
	printf("Output: %s\n", dst);
}

void	ft_testputchar_fd()
{
	printf("void ft_putchar_fd(char c, int fd)\n");
	char c;
	int fd;
	scanf("%c %d", &c, &fd);
	ft_putchar_fd(c, fd);
}

void	ft_testputendl_fd()
{
	printf("void ft_putendl_fd(char *s, int fd)\n");
	char s[20];
	int fd;
	scanf("%20s %d", &s[0], &fd);
	ft_putendl_fd(s, fd);
	write(1, "-", 1);
}

void	ft_testputnbr_fd()
{
	printf("void ft_putnbr_fd(int n, int fd)\n");
	int n;
	int fd;
	scanf("%d %d", &n, &fd);
	ft_putnbr_fd(n, fd);
}

void	ft_testputstr_fd()
{
	printf("void ft_putstr_fd(char *s, int fd)\n");
	char s[20];
	int fd;
	scanf("%20s %d", &s[0], &fd);
	ft_putstr_fd(s, fd);
}

void	ft_testsplit()
{
	printf("char **ft_split(char const *s, char c)\n");
	char s[50];
	char c;
	scanf("%50s %c", &s[0], &c);
	char	**out;
	out = ft_split(s, c);
	for (int i = 0; out[i] != 0; i++)
	{
		printf("Output %d: %s\n", i, out[i]);
	}
}

void	ft_teststrchr()
{
	printf("char *ft_strchr(const char *s, int c)\n");
	char s[50];
	char c;
	scanf("%50s %c", &s[0], &c);
	printf("Output: %s\n", ft_strchr(s, c));
}

void	ft_teststrdup()
{
	printf("char *ft_strdup(const char *src)\n");
	char src[50];
	scanf("%50s", &src[0]);
	printf("Output: %s\n", ft_strdup(src));
}

void	ft_iter(unsigned int i, char *c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "Wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void	ft_teststriteri()
{
	printf("void ft_striteri(char *s, void (*f)(unsigned int, char*));\n");
	char s[20];
	scanf("%20s", &s[0]);
	ft_striteri(s, &ft_iter);
	printf("Output: %s\n", s);
}

void	ft_teststrjoin()
{
	printf("char *ft_strjoin(char const *s1, char const *s2)\n");
	char s1[20];
	char s2[20];
	scanf("%20s %20s", &s1[0], &s2[0]);
	printf("Output: %s\n", ft_strjoin(s1, s2));
}

void	ft_teststrlcat()
{
	printf("size_t ft_strlcat(char *dst, const char *src, size_t size)\n");
	char dst[20];
	char src[20];
	size_t size;
	size_t out;
	scanf("%20s %20s %zu", &dst[0], &src[0], &size);
	out = ft_strlcat(dst, src, size);
	printf("Output: %zu (%s)\n", out, dst);
}

void	ft_teststrlcpy()
{
	printf("size_t ft_strlcpy(char *dst, const char *src, size_t size)\n");
	char dst[20];
	char src[20];
	size_t size;
	size_t out;
	scanf("%20s %20s %zu", &dst[0], &src[0], &size);
	out = ft_strlcpy(dst, src, size);
	printf("Output: %zu (%s)\n", out, dst);
}

void	ft_teststrlen()
{
	printf("size_t ft_strlen(const char *s)\n");
	char s[20];
	scanf("%20s", &s[0]);
	printf("Output: %zu\n", ft_strlen(s));
}

char	ft_mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "Wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

void	ft_teststrmapi()
{
	printf("char *ft_strmapi(char const *s, char (*f)(unsigned int, char))\n");
	char s[20];
	scanf("%20s", &s[0]);
	char *out;
	out = ft_strmapi(s, &ft_mapi);
	printf("Output: %s\n", out);
}

void	ft_teststrncmp()
{
	printf("int ft_strncmp(const char *s1, const char *s2, size_t n)\n");
	char s1[20];
	char s2[20];
	size_t n;
	scanf("%20s %20s %zu", &s1[0], &s2[0], &n);
	int out;
	out = ft_strncmp(s1, s2, n);
	if (out == 0)
		printf("s1 == s2 (character %zu)\n", n);
	else if (out > 0)
		printf("s1 > s2 (character %zu)\n", n);
	else
		printf("s1 < s2 (character %zu)\n", n);
}

void	ft_teststrnstr()
{
	printf("char *ft_strnstr(const char *big, const char *little, size_t len)\n");
	char big[20];
	char little[20];
	size_t len;
	scanf("%20s %20s %zu", &big[0], &little[0], &len);
	printf("Output: %s\n", ft_strnstr(big, little, len));
}

void	ft_teststrrchr()
{
	printf("char *ft_strrchr(const char *s, int c)\n");
	char s[50];
	char c;
	scanf("%50s %c", &s[0], &c);
	printf("Output: %s\n", ft_strchr(s, c));
}

void	ft_teststrtrim()
{
	printf("char *ft_strtrim(char const *s1, char const *set)\n");
	char s1[50];
	char set[10];
	scanf("%50s %10s", &s1[0], &set[0]);
	printf("Output: %s\n", ft_strtrim(s1, set));
}

void	ft_testsubstr()
{
	printf("char *ft_substr(char const *s, unsigned int start, size_t len)\n");
	char s[50];
	unsigned int start;
	size_t len;
	scanf("%50s %u %zu", &s[0], &start, &len);
	printf("Output: %s\n", ft_substr(s, start, len));
}

void	ft_testtolower()
{
	printf("int ft_tolower(int c)\n");
	int c;
	scanf("%d", &c);
	printf("%d\n", ft_tolower(c));
}

void	ft_testtoupper()
{
	printf("int ft_toupper(int c)\n");
	int c;
	scanf("%d", &c);
	printf("%d\n", ft_toupper(c));
}

int main(void)
{
	int i;
	printf("LIBFT MANUAL TESTER\n");
	printf("Function to be tested (enter 0 to display the list of the functions): ");
	scanf("%d", &i);
	switch (i)
	{
		case 0:
			printf("\n1:atoi   2:bzero   3:calloc   4:isalnum   5:isalpha   6:isascii   7:isdigit\n\n8:isprint   9:itoa   10:memchr   11:memcmp   12:memcpy   13:memmove   14:memset\n\n15:putchar_fd   16:putendl_fd   17:putnbr_fd   18:putstr_fd   19:split   20:strchr\n\n21:strdup   22:striteri   23:strjoin   24:strlcat   25:strlcpy   26:strlen   27:strmapi\n\n28:strncmp   29:strnstr   30:strrchr   31:strtrim   32:substr   33:tolower   34:toupper\n\n");
			break;
		case 1:
			ft_testatoi();
			break;
		case 2:
			ft_testbzero();
			break;
		case 3:
			ft_testcalloc();
			break;
		case 4:
			ft_testisalnum();
			break;
		case 5:
			ft_testisalpha();
			break;
		case 6:
			ft_testisascii();
			break;
		case 7:
			ft_testisdigit();
			break;
		case 8:
			ft_testisprint();
			break;
		case 9:
			ft_testitoa();
			break;
		case 10:
			ft_testmemchr();
			break;
		case 11:
			ft_testmemcmp();
			break;
		case 12:
			ft_testmemcpy();
			break;
		case 13:
			ft_testmemmove();
			break;
		case 14:
			ft_testmemset();
			break;
		case  15:
			ft_testputchar_fd();
			break;
		case 16:
			ft_testputendl_fd();
			break;
		case 17:
			ft_testputnbr_fd();
			break;
		case 18:
			ft_testputstr_fd();
			break;
		case 19:
			ft_testsplit();
			break;
		case 20:
			ft_teststrchr();
			break;
		case 21:
			ft_teststrdup();
			break;
		case 22:
			ft_teststriteri();
			break;
		case 23:
			ft_teststrjoin();
			break;
		case 24:
			ft_teststrlcat();
			break;
		case 25:
			ft_teststrlcpy();
			break;
		case 26:
			ft_teststrlen();
			break;
		case 27:
			ft_teststrmapi();
			break;
		case 28:
			ft_teststrncmp();
			break;
		case 29:
			ft_teststrnstr();
			break;
		case 30:
			ft_teststrrchr();
			break;
		case 31:
			ft_teststrtrim();
			break;
		case 32:
			ft_testsubstr();
			break;
		case 33:
			ft_testtolower();
			break;
		case 34:
			ft_testtoupper();
			break;
		default:
			return (0);
	}
	return (0);
}
