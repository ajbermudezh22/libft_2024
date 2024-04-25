/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:26:46 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/24 20:18:17 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_belongs_to_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_belongs_to_set(*start, set))
		start++;
	while (start < end && ft_belongs_to_set(*(end - 1), set))
		--end;
	trimmed = ft_substr(start, 0, end - start);
	return (trimmed);
}

/*
int main(void)
{
    char const *s1;
    char const *set;
    char *result;

    // Test 1: Regular trimming
    s1 = "###Hello, World###";
    set = "#";
    result = ft_strtrim(s1, set);
    printf("Test 1 - Expected: Hello, World | Result: %s\n", result);
    free(result); // Free memory after use

    // Test 2: No trimming needed
    s1 = "Hello, World";
    set = "#";
    result = ft_strtrim(s1, set);
    printf("Test 2 - Expected: Hello, World | Result: %s\n", result);
    free(result);

    // Test 3: Trim all characters
    s1 = "#####";
    set = "#";
    result = ft_strtrim(s1, set);
    printf("Test 3 - Expected: (empty) | 
	Result: %s\n", result ? result : "(null)");
    free(result);

    // Test 4: Empty string input
    s1 = "";
    set = "#";
    result = ft_strtrim(s1, set);
    printf("Test 4 - Expected: (empty) | 
	Result: %s\n", result ? result : "(null)");
    free(result);

    // Test 5: NULL pointers (should be handled if your ft_strtrim handles NULL)
    s1 = NULL;
    set = "#";
    result = ft_strtrim(s1, set);
    printf("Test 5 - Expected: (null) | Result: 
	%s\n", result ? result : "(null)");

    return 0;
}
*/