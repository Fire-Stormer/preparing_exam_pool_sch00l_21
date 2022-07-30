#include <stdio.h>
#include <stdlib.h>

int main() {
  int *str = malloc(1 * sizeof(int));
  int k = 0;
  int flag = 0;
  while (scanf("%d", &str[k]) == 1 && str[k] != -1) { // считываем строку
    int *tmp = realloc(str, k + 1);
    if (tmp == NULL) {
      flag = 1;
    } else {
      str = tmp;
      k++;
    }
  }

  if (flag == 0) {

    int *out = calloc(k + 1, sizeof(int));
    int n = 0;
    for (int i = 0; i < k + 1; i++) {
      int counter = 0;
      for (int j = 0; j < k + 1; j++) {
        if (str[i] == out[j]) {
          counter++;
        }
      }
      if (counter == 0 && str[i] != -1) {
        out[n] = str[i];
        n++;
      }
    }
    for (int i = 0; i < n; i++) {
      printf("%d ", out[i]);
    }
    free(out);
  }
  free(str);
  return 1;
}
 /* Написать программу, осуществляющую удаление повторяющихся элементов в последовательности, состоящей из целых неотрицательных чисел. (Концом последовательности считать -1)
Порядок элементов в результирующей последовательности должен соответствовать порядку первых вхождений соответствующих чисел в исходной последовательности  

Пример ввода и вывода:
1 1 2 2 3 3 -1 | 1 2 3
1 2 1 3 1 4 -1 | 1 2 3 4
-1 | */
