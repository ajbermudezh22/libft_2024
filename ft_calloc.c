/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:50:53 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 14:55:27 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*mem;
	size_t	i;

	if (size && nitems > SIZE_MAX / size)
		return (NULL);
	i = 0;
	mem = malloc(nitems * size);
	if (mem == NULL)
		return (0);
	while (i < nitems * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
/*
int main() 
{
    int *data = (int *)ft_calloc(4, sizeof(int));
    if (data == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    for (int i = 0; i < 4; i++) {
        printf("%d ", data[i]);  // Should print: 0 0 0 0
    }
    free(data);
    return 0;
}
*/