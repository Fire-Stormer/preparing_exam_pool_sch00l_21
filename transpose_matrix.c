#include <stdio.h>

int main() {
    int N, flag = 1;
    if (scanf("%d", &N) == 1 && N > 0) {
        int matrix[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                flag = scanf("%d", &matrix[i][j]);
            }
        }
        if (flag == 0) {
            printf("n/a");
        } else {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    printf("%d", matrix[j][i]);
                    if (j != N - 1) { printf(" "); }
                }
                if (i != N - 1) { printf("\n"); }
            }
        }
    }


    return 0;
}
