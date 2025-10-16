/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:06:34 by talkhati          #+#    #+#             */
/*   Updated: 2025/09/08 18:44:17 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **arr, int i)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

static int	count_word(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**to_free(char **result, char *s, char c, int word_count)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		result[i] = (char *)malloc(len + 1);
		if (!result[i])
		{
			free_split(result, i - 1);
			return (NULL);
		}
		j = 0;
		while (j < len)
			result[i][j++] = *s++;
		result[i][j] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	to_free(result, (char *)s, c, word_count);
	return (result);
}
/*
int	main(void)
 {
     char **arr;

	arr =  ft_split("ttttt", '^');
	int i = 0;
	while (arr[i])
	{
 		printf("%s\n", arr[i]);
 		i++;
	}
 	return (0);
 }*/
