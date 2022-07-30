#include <stdio.h>

struct data {
    char name[1000];
    char surname[1000];
    int height; 
};

int main() {
    int n; // количество структур
    scanf("%d", &n);
    struct data data[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", data[i].name);
        scanf("%s", data[i].surname);
        scanf("%d", &data[i].height);
    }

    int limit;
    scanf("%d", &limit);

    for (int i = 0; i < n; i++) {
        if (data[i].height > limit) {
            printf("%s, %s\n", data[i].name, data[i].surname);
        }
    }

}