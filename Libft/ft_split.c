/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 22:01:09 by azakizad          #+#    #+#             */
/*   Updated: 2022/06/25 09:13:15 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (str != NULL && *str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	arrfree(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**check(char **split, const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			if (split[j - 1] == NULL)
			{
				arrfree(split);
				return (NULL);
			}
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}

/*
 * Function that returns an array of strings obtained by splitting the
 * string 's' at every character 'c'. The array contains a NULL pointer
 * as a last element.
 */

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	split = check(split, s, c);
	return (split);
}

// int	main(void)
// {
// char	**tab;
// unsigned int	i;

// i = 0;
// tab = ft_split("      split       this for   me  !", ' ');
// if (!tab[0])
// 	ft_putendl_fd("ok\n", 1);
// 	while (tab[i] != NULL)
// 	{
// 		ft_putendl_fd(tab[i], 1);
// 		i++;
// 	}
// }
