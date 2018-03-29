/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8Q.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 02:41:36 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/15 02:41:38 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

void	init(int *i, int *j, int *k)
int     solve(int board_size)

int     main(void)
{
    solve(8);
    return (0);
}

void	init(int *i, int *j, int *k)
{
	*i = -1;    //Counter
	*j = 0;     //N of solutions
	*k = 0;     //N of queen
}

int     solve(int board_size)
{
    int     **board;
    int     queen[board_size];
    int     i;
    int     j;
    int     k;

    init(&i, &j, &k);
    board = (**int)malloc(sizeof(*board) * board_size);
	init_board(queen, board)
    while (++i < board_size)
		board[i] = (*int)malloc(sizeof(*dest[j]) * (board_size));


    while (k < board_size && can_move(queen[++k], board) == TRUE)
        move_queen(k, board);
            j++;
    return(j);
}

void    can_move