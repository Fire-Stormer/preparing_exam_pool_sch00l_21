#include <stdio.h>
#include <stdlib.h>

void read_matrix(int **matrix, int *pflag, int N);

int main() {
  int N, flag = 0;
  if (scanf("%d", &N) == 1 && N > 0) {
    int **matrix1, **matrix2;

    matrix1 = malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
      matrix1[i] = malloc(N * sizeof(int));
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        flag = scanf("%d", &matrix1[i][j]);
      }
    }

    matrix2 = malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
      matrix2[i] = malloc(N * sizeof(int));
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

    for (int i = 0; i < N; i++) {
      free(matrix1[i]);
      free(matrix2[i]);
    }
    free(matrix1);
    free(matrix2);
  } else {
    printf("n/a");
  }
  return 0;
}
