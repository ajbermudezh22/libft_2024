/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:48:20 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:31:57 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = (void *)0;
	while (*str)
	{
		if (*str == (char)c)
			ptr = (char *)str;
		++str;
	}
	if (!(char)c)
		ptr = (char *)str;
	return (ptr);
}
/*
int main()
{
    const char *str = "Hello, World! Hello again!";
    char *result = ft_strrchr(str, 'H');
    if (result)
        printf("Last occurrence: %s\n", result);
    else
        printf("Character not found\n");
    return 0;
}
*/
