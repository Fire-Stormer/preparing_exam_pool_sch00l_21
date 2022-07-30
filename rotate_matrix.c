#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	int** pointer = malloc(n * sizeof(int*));
	int* value = malloc(n * n * sizeof(int));

	for (int i = 0; i < n; i++) {
		pointer[i] = value + n * i;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &pointer[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", pointer[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int** p = malloc(n * sizeof(int*));
	int* v = malloc(n * n * sizeof(int));

	for (int i = 0; i < n; i++) {
		p[i] = v + n * i;
	}

	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			p[i][n - 1 - j] = pointer[j][i];
		}
	}

    for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	free(value);
	free(pointer);
	free(v);
	free(p);
	return 0;
}