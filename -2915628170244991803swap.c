#include <stdio.h>

int main() {

  int M, N;

  if (scanf("%d", &M) != 1) {
    printf("n/a");
    return 1;
  }

  if (scanf("%d", &N) != 1) {
    printf("n/a");
    return 1;
  }

  int a[M][N];

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  int max_i = 0, min_i = 0, max = a[0][0], min = a[0][0];

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (a[i][j] > max) {
        max = a[i][j];
        max_i = i;
      }
      if (a[i][j] < min) {
        min = a[i][j];
        min_i = i;
      }
    }
  }

  for (int j = 0; j < N; j++) {
    int tmp = a[max_i][j];
    a[max_i][j] = a[min_i][j];
    a[min_i][j] = tmp;
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (j < N - 1) {
        printf("%d ", a[i][j]);
      } else {
        printf("%d", a[i][j]);
        printf("\n");
      }
    }
  }
}
