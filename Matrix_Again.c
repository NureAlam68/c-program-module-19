#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int m[r][c];

    // matrix input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    // print last row
    for (int j = 0; j < c; j++)
    {
        printf("%d ", m[r - 1][j]);
    }
    printf("\n");

    // print last column
    for (int i = 0; i < r; i++)
    {
        printf("%d ", m[i][c - 1]);
    }
    printf("\n");

    return 0;
}
