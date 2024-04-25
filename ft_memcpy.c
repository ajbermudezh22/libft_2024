/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:01:05 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:35:48 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ret;

	if (!dest && !src)
		return (0);
	ret = dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (ret);
}
/*
int main(void)
{
	char s1[5];
	const char *s2 = "hola";

	ft_memcpy(s1, s2, 4);
	s1[4] = '\0';
	printf("%s\n",s1);
}
*/
