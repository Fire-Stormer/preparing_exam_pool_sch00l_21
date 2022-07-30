#include <stdio.h>

int main() {
  int N, flag = 0;
  if (scanf("%d", &N) == 1 && N > 0) {
    int matrix1[N][N], matrix2[N][N];

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        flag = scanf("%d", &matrix1[i][j]);
      }
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        flag = scanf("%d", &matrix2[i][j]);
      }
    }

    if (flag == 0) {
      printf("n/a");
    } else {
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          int sum = 0;
          for (int k = 0; k < N; k++) {
            sum += matrix1[i][k] * matrix2[k][j];
          }
          printf("%d", sum);
          if (j != N - 1) {
            printf(" ");
          }
        }
        if (i != N - 1) {
          printf("\n");
        }
      }
    }
  } else {
    printf("n/a");
  }
  return 0;
}
