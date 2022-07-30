#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;
  char term;

  if (scanf("%d%c", &N, &term) != 2 || term != '\n') {
    printf("n/a");
    return 1;
  }

  int A[N][N];
  int B[N][N];
  int C[N][N];

  //   int **A = (int **)malloc(N * sizeof(int *));
  //   int **B = (int **)malloc(N * sizeof(int *));
  //   int **C = (int **)malloc(N * sizeof(int *));

  //   for (int i = 0; i < N; i++) {
  //     A[i] = (int *)malloc(N * sizeof(int));
  //     B[i] = (int *)malloc(N * sizeof(int));
  //     C[i] = (int *)malloc(N * sizeof(int));
  //   }

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) {
      if (scanf("%d", &A[i][j]) != 1) {
        printf("n/a");
        return 1;
      }
    }

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) {
      if (scanf("%d", &B[i][j]) != 1) {
        printf("n/a");
        return 1;
      }
    }

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) {
      C[i][j] = 0;
      for (int k = 0; k < N; k++)
        C[i][j] += A[i][k] * B[k][j];
    }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (j < N - 1) {
        printf("%d ", C[i][j]);
      } else {
        printf("%d", C[i][j]);
        printf("\n");
      }
    }
  }
}
