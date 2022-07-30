#include <stdio.h>

int main() {
    int a;
    if (scanf("%d", &a)) {
            int b = a%10;
            int c = a / 10;
            int d = c%10;
            int e = c / 10;
            int f = e%10;
        if (a >= 0) {
            printf("%d%d%d", b, d, f);
        }
        if (a < 0) {
            printf("-%d%d%d", b * (-1), d * (-1), f * (-1));
        }
    }
    return 0;
}
