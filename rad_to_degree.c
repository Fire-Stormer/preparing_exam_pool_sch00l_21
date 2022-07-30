#include <stdio.h>

int input(int *r);

int main() {
    int r;
    double rad = 57.3, result;
    if(input(&r) == 0) {
        result = r * rad;
        if ((result - (int)result) >= 0.5) {
            result = (int)result + 1;
        }
        printf("%d", (int)result);
    } else {
        printf("n/a");
    }

    return 0;
}

int input (int *r) {
    int f = 0;
    if (scanf("%d", r) != 1) {
        f = 1;
    }
    return f;
}


//Перевести радианы в градусы. На вход - целое число.
//Вывести целое число, округленное по правилам математики