
// Copyright 2022 finchren
#include <stdio.h>
#include <stdlib.h>

int main() {
    int kArrayLenght = 2, counter_for_output, temp, *pointer_to_the_array;
    pointer_to_the_array = (int*)malloc(sizeof(int));
    if (pointer_to_the_array == NULL) {
        printf("n/a");
        return 1;
    } else {
        for (int i = 0; i < kArrayLenght; i++) {
            if (!scanf("%d", &temp)) {
                printf("n/a");
                return 1;
            } else if (temp == -1) {
                kArrayLenght = i;
            } else {
                pointer_to_the_array[i] = temp;
                kArrayLenght += 1;
                pointer_to_the_array = (int*)realloc(pointer_to_the_array, (kArrayLenght)*sizeof(int));
                }
        }
        counter_for_output = kArrayLenght;
        printf("Array of numbers after input:\n");
        for (int i = 0; i < kArrayLenght; i++) {
            printf("%d", pointer_to_the_array[i]);
            if (i < kArrayLenght - 1) {
                printf(" ");
            } else if (i == kArrayLenght - 1) {
                printf("\n");
            }
        }
        printf("Array of numbers multiplied:\n");
        for (int j = 0; j < kArrayLenght; j++) {
            printf("%d", pointer_to_the_array[j] * counter_for_output);
            counter_for_output--;
            if (j < kArrayLenght - 1) {
                printf(" ");
            }
        }
    }
    free(pointer_to_the_array);
}

/*
Задание №2
Дана последовательность целых чиселЧисло nСимвол конца -1
Вывести x1 xn x2 xn-1 x3 xn-2 и так далее
*/// Copyright 2022 finchren
#include <stdio.h>
#include <stdlib.h>

int main() {
    int kArrayLenght = 2, counter_for_output, temp, *pointer_to_the_array;
    pointer_to_the_array = (int*)malloc(sizeof(int));
    if (pointer_to_the_array == NULL) {
        printf("n/a");
        return 1;
    } else {
        for (int i = 0; i < kArrayLenght; i++) {
            if (!scanf("%d", &temp)) {
                printf("n/a");
                return 1;
            } else if (temp == -1) {
                kArrayLenght = i;
            } else {
                pointer_to_the_array[i] = temp;
                kArrayLenght += 1;
                pointer_to_the_array = (int*)realloc(pointer_to_the_array, (kArrayLenght)*sizeof(int));
                }
        }
        counter_for_output = kArrayLenght;
        printf("Array of numbers after input:\n");
        for (int i = 0; i < kArrayLenght; i++) {
            printf("%d", pointer_to_the_array[i]);
            if (i < kArrayLenght - 1) {
                printf(" ");
            } else if (i == kArrayLenght - 1) {
                printf("\n");
            }
        }
        printf("Array of numbers multiplied:\n");
        for (int j = 0; j < kArrayLenght; j++) {
            printf("%d", pointer_to_the_array[j] * counter_for_output);
            counter_for_output--;
            if (j < kArrayLenght - 1) {
                printf(" ");
            }
        }
    }
    free(pointer_to_the_array);
}

/*
Задание №2
Дана последовательность целых чиселЧисло nСимвол конца -1
Вывести x1 xn x2 xn-1 x3 xn-2 и так далее
*/
