/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:15:32 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:31:30 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	little_len;

	if (!ft_strlen(little))
		return ((char *)big);
	if (!ft_strlen(big) || n < ft_strlen(little))
		return (0);
	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	if (n < little_len)
		return (NULL);
	i = n - little_len + 1;
	while (i-- > 0 && *big != '\0')
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
/*
int main()
{
    const char *big = "Hello, World!";
    const char *little = "World";
    char *result = ft_strnstr(big, little, 15);
    if (result)
        printf("Found substring: %s\n", result);
    else
        printf("Substring not found\n");
    return 0;
}
*/
