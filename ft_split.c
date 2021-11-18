#include <stdlib.h>
#include <stdio.h>
static char **free_al(char *str, int n)
{
	int i;
	
	i = 0;
	while( i < n)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return(NULL);	
}
int 	ft_words(const char *s, char c)
{
	int i;
	int words = 0;
	i = 0;
	while(s[i])
		{
			if((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
					words++;
		i++;
		}
	return (words);
}
char	**ft_cat(char **str, const char *s, char c, int len)
{
	int i;
	int j;
	int k;

	i = 0;
	j =0;
	while(i < len)
	{
		k = 0;
		while(s[j] && s[j] == c)
			j++;
			while(s[j] && s[j] != c)	
			{
				str[i][k] = s[j];
				j++;
				k++;
			}
		str[i][k] = '\0';
		i++;
	}
	str[i] = 0;
	return(str);
}
char	**ft_split(const char *s, char c)
{
	char **str;
	int i;
	int j;
	int k;
	int len;
	
	len = ft_words(s, c);
	i = -1;
	str = (char **)malloc(sizeof(char *) *(len + 1));
	if(!str)
		return (NULL);
	while(i++ < len)
	{
		k = 0;
		while(s[j] && s[j] == c)
			j++;
		while(s[j] && s[j++] != c)
			k++;
		str[i] = (char*)malloc(sizeof(char ) *(k + 1));
		if(!str[i])
			return (free_al(str, i));
	}
	return(ft_cat(str, s, c, len));
}	
int main()
{
	int i;
	i = 0;
	const char s[] = "           hello world                   ";
	char c = ' ';
	int len = ft_words(s, c);
	char **str = ft_split(s, c);
	while(i < len)
		{
			puts(str[i]);
			i++;
		}
}

