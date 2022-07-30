#include <stdio.h>
#include <stdlib.h>

int main() {
    int str[1000];
    int output[1000];
    int k = 0;
    while(scanf("%d", &str[k]) == 1 && str[k] != -1) { // считываем строку
        k++;
    }

    int j = 0;
    for(int i = 0; i < k; i += 2)   { // записываем элементы с начала
        output[i] = str[j];
        j++;
    }

    j = k - 1;
    for(int i = 1; i < k; i += 2)   { // записываем элементы с конца
        output[i] = str[j];
        j--;
    }

    for(int i = 0; i < k; i++) {
        printf("%d ", output[i]);  // печатаем массив
    }
    return 0;
}

/*
Задание №2
Дана последовательность целых чиселЧисло nСимвол конца -1
Вывести x1 xn x2 xn-1 x3 xn-2 и так далее
*/