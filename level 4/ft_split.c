/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 07:31:36 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/01 19:17:15 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <string.h>
#include <stdio.h>


int ft_len(char *str)
{
	int len = strlen(str);
	int i = 0;
	int count = 0;

    while (i < len)
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
    	if (str[i])
		{
    	    count++;
    	    while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
    	    	i++;
    	}
    }
	return (count);
}

int ft_count(char const *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while ((s[i] != ' ' && s[i] != '\t' && s[i] != '\n') && s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_do(char const *s, int rows, char **str)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (++i < rows)
	{
		while (*s == ' ' || *s == '\t')
			s++;
		len = ft_count(s);
		str[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!str[i])
			return (0);
		j = 0;
		while (j < len)
			str[i][j++] = *s++;
		str[i][j] = '\0';
	}
	str[i] = NULL;
	return (str);
}

char    **ft_split(char *str)
{
	char **s;
	int len;

	len = ft_len(str);
	s = malloc(sizeof(char **) * len + 1);
	if (!s)
		return (0);
	s =  ft_do(str, len, s);
	return (s);
}
int main()
{
	// printf("%d", ft_count("   		hello world 	hiho  		 fkvsdhfk kvbdscklx  	kdsncxl			"));
	int i = 0;
	char s[] = "   		hello world 	hiho  		 fkvsdhfk kvbdscklx  	kdsncxl			";
	char **tmp =ft_split(s);
	// printf("%s", tmp[i]);
	while(tmp[i])
	{
		printf("%s\n",tmp[i]);
		i++;
	}
}