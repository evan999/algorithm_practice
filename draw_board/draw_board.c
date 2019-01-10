#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int draw_board(void);

int main(void)
{
    int board = draw_board();
    printf("%c", board);
}

int draw_board(void)
{
    int num_rows = 5;
    int num_cols = 5;

    for (int row = 1; row < num_rows; row++)
    {
        for (int col = 1; col < num_cols; col++)
        {
            if (row % 2 != 0 && row != 0)
            {
                printf("-");
            }
            else if (col % 2 != 0 && col != 0)
            {
                printf("+");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

