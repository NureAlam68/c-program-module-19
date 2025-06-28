#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        long long M;
        int A, B, C;
        scanf("%lld %d %d %d", &M, &A, &B, &C);

        long long mul = (long long)A * B * C;

        if (M == 0) {
            if (A == 0 || B == 0 || C == 0) {
                printf("0\n");
            } else {
                printf("0\n");
            }
        } else {
            if (mul == 0) {
                printf("-1\n");
            } else if (M % mul != 0) {
                printf("-1\n");
            } else {
                long long D = M / mul;
                printf("%lld\n", D);
            }
        }
    }

    return 0;
}
