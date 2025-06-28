#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);

        int A[N], B[N], C[N];

        // Input A and copy to B
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        // Sort B using bubble sort
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = 0; j < N - 1 - i; j++)
            {
                if (B[j] > B[j + 1])
                {
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        // Calculate C
        for (int i = 0; i < N; i++)
        {
            int diff = A[i] - B[i];
            if (diff < 0)
                diff = -diff;
            C[i] = diff;
        }

        // Print C
        for (int i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
