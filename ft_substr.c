/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:02:30 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:34:58 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	memsize;
	size_t	i;
	char	*sub;

	memsize = 1;
	i = 0;
	if (s)
	{
		while (s[i] && i < start)
			i++;
		while (s[i++] && len--)
			++memsize;
	}
	sub = malloc(memsize);
	if (!sub)
		return (NULL);
	sub[--memsize] = 0;
	while (memsize--)
		sub[memsize] = s[start + memsize];
	return (sub);
}
/*
char *ft_substr(char const *s, unsigned int start, size_t len);

int main() {
    const char *str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(str, start, len);
    if (substring) {
        printf("Substring: '%s'\n", substring);
        free(substring);
    } else {
        printf("Failed to allocate memory for substring.\n");
    }

    return 0;
}
*/
