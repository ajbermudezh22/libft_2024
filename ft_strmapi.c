/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:06:04 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:34:43 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	if (!s)
		return (0);
	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (0);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		++i;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
char uppercase(unsigned int i, char c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

char shift_by_index(unsigned int i, char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        int shift = (c + i) % 26;
        if (c >= 'a' && c <= 'z')
            return (shift < 'a') ? 'z' - ('a' - shift - 1) : shift;
        else
            return (shift < 'A') ? 'Z' - ('A' - shift - 1) : shift;
    }
    return c;
}

int main() {
    char *result;
    char *input = "example string";

    // Test 1: Uppercase conversion
    result = ft_strmapi(input, uppercase);
    printf("Uppercase: %s\n", result);
    free(result); // Don't forget to free memory!

    // Test 2: Character shift by index
    result = ft_strmapi(input, shift_by_index);
    printf("Shifted by Index: %s\n", result);
    free(result);
    return 0;
}
*/