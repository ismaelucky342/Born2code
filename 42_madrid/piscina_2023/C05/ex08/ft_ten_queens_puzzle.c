/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:54:45 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/23 17:13:02 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_board(int *board)
{
    int i;
    int j;

    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            if (board[i] == j)
                ft_putchar('1');
            else
                ft_putchar('0');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int ft_count_solutions(int col, int *board)
{
    int count;
    int row;

    if (col >= 10)
        return 1;
    count = 0;
    row = 0;
    while (row < 10)
    {
        int is_valid;
        int temp;

        is_valid = 1;
        temp = row;
        while (temp >= 0)
        {
            if (board[temp] == row || board[temp] - temp == col - row || board[temp] + temp == col + row)
            {
                is_valid = 0;
                break;
            }
            temp--;
        }
        if (is_valid)
        {
            board[row] = col;
            count += ft_count_solutions(col + 1, board);
        }
        row++;
    }
    return count;
}

int ft_ten_queens_puzzle(void)
{
    int board[10];
    int i;

    i = 0;
    while (i < 10)
    {
        board[i] = -1;
        i++;
    }
    return ft_count_solutions(0, board);
}

int main()
{
    int solutions;

    solutions = ft_ten_queens_puzzle();
    printf("%d\n", solutions);
    return 0;
}
