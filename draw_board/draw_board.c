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
    int num_rows = 4;
    int num_cols = 4;

    for (int row = 0; row <= num_rows; row++)
    {
        for (int col = 0; col <= num_cols; col++)
        {
            printf(" ");

            if (col % 2 == 0 && row % 2 == 0)
            {
                printf(" ");
            }

            if (col % 2 != 0 && row % 2 == 0)
            {
                printf("|");
            }

            if (row % 2 != 0 && col % 2 != 0)
            {
                printf("+");
            }

            if (row % 2 != 0 && col % 2 == 0)
            {
                printf("-");
            }
        }
        printf("\n");
        //printf("\n");
    }
    return 0;
}

