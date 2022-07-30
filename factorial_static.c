#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main() {
    int n;
    if(scanf("%d", &n) == 1) {
    n = n + 1;
    int arr[N][N];
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    arr[0][0] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                arr[i][j] = 1;
            } else {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    for (int j = 0; j < n; j++) {
        printf("%d ", arr[n - 1][j]);
    }
    return 0;
    }
}