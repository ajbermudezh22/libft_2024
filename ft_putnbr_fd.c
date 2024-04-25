/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:58 by albbermu          #+#    #+#             */
/*   Updated: 2024/04/25 15:36:02 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putn(int n, int fd)
{
	if (!n)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n < -9)
			ft_putn(n / 10 * -1, fd);
		ft_putchar_fd(n % 10 * -1 + '0', fd);
	}
	else
	{
		if (n > 9)
			ft_putn(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (!n)
		ft_putchar_fd('0', fd);
	else
		ft_putn(n, fd);
}
/*
int main() {
    // Test with zero
    ft_putnbr_fd(0, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);  

    // Test with a positive number
    ft_putnbr_fd(12345, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    // Test with a negative number
    ft_putnbr_fd(-12345, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    // Test with INT_MAX
    ft_putnbr_fd(2147483647, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    // Test with INT_MIN
    ft_putnbr_fd(-2147483648, STDOUT_FILENO);
    write(STDOUT_FILENO, "\n", 1);

    ft_putnbr_fd(-98765, STDERR_FILENO);
    write(STDERR_FILENO, "\n", 1);

    return 0;
}
*/
