#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int m[r][c];

    // Input matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    // Check if square matrix
    if (r != c)
    {
        printf("NO\n");
        return 0;
    }

    int isJadu = 1; // assume jadu matrix

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j || i + j == r - 1)
            {
                // primary or secondary diagonal
                if (m[i][j] != 1)
                {
                    isJadu = 0;
                    break;
                }
            }
            else
            {
                // rest cells must be 0
                if (m[i][j] != 0)
                {
                    isJadu = 0;
                    break;
                }
            }
        }
        if (isJadu == 0)
            break;
    }

    if (isJadu)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
