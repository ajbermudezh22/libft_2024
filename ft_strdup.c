/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:10:04 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:36:11 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*dup;
	size_t	n;

	n = ft_strlen(str1);
	dup = malloc(n + 1);
	if (!dup)
		return (NULL);
	dup[n] = 0;
	while (n--)
		dup[n] = str1[n];
	return (dup);
}
/*
// Assuming the declaration of ft_strdup is in "libft.h"
char *ft_strdup(const char *str1);

int main() {
    const char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);  // Don't forget to free the allocated memory
    } else {
        printf("Failed to allocate memory for duplicate string.\n");
    }

    return 0;
}
*/
