/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:47:15 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:20:58 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main() 
{
    int val = 42;
    t_list *node = ft_lstnew(&val);
    printf("Content of new node: %d\n", *(int *)node->content); 
	// Should print: Content of new node: 42
    free(node);
    return 0;
}
*/
