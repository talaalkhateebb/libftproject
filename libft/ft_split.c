/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:06:34 by talkhati          #+#    #+#             */
/*   Updated: 2025/09/07 15:06:50 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	free_split(char **arr, int i)
{
	while (i > 0)
	{
		free(arr[--i]);
	}
	free(arr);
}

int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != '\0')
		{
			count++;
			while (s[i] && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	result = malloc((count_word(s, c) + 1) * sizeof(char *));
	while (i < count_word(s, c))
	{
		while (*s == c)
			s++;
		result[i] = malloc(word_len(s, c) + 1);
		if (!result[i])
		{
			free_split(result, i);
			return (NULL);
		}
		j = 0;
		while (j < word_len(s, c))
			result[i][j++] = *s++;
		result[i][j] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*int main(void)
{
    char **arr;
    int i;

          arr = ft_split("hello world test", ' ');
    printf("Test 1:\n");
    for (i = 0; arr[i]; i++)
        printf("[%s]\n", arr[i]);
    return (0);
}*/
