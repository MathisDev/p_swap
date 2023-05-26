# include "lib.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	i;

	if (!dst || !src)
		return (0);
	src_size = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_size);
}

void add(char c,char *l1)
{
	int	len;
	char	*tmp_str;
	int	i;
	int ii;
	
	i = 1; 
	ii = 0;
	tmp_str = NULL;
	len = ft_strlen(l1);
	ft_strlcpy(tmp_str,l1,len);
	l1 = NULL;
	l1 = (char *)malloc(sizeof(char) * len + 1);
	l1[0] = c;
	while (tmp_str[ii] != '\0' )
	{
		l1[i] = tmp_str[ii];
		i++;
		ii++;
	}
}

void	print_str(char	*str)
{
	write(1,str,ft_strlen(str));
}