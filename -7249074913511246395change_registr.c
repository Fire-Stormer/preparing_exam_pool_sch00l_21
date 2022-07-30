#include <stdio.h>
#include <stdlib.h>

void output(size_t i, char* array);
void change_reg(size_t i, char* array);

int main() {
    char* array = NULL;
    size_t i = 0;
    char box;
    while (scanf("%c", &box) != 0 && box != '\n') {
        array = realloc(array, (i + 1) * sizeof(char));
        array[i] = box;
        i++;
    }
    array[i] = '\0';
    change_reg(i, array);
    output(i, array);
    free(array);
    return 0;
}

// поиск  буквы в нижнем регистре и замена ее на букву в верхнем регистре
void change_reg(size_t i, char* array) {
    size_t j = 0;
    while (j < i) {
        if (array[0] < 123 && array[0] > 96) {
            array[0] = array[0] - 32;
        }
        if (array[j] == ' ') {
            if (array[j + 1] < 123 && array[j + 1] > 96) {
                array[j + 1] = array[j + 1] - 32;
            }
        }
        j++;
    }
}

// вывод нового массива в терминале
void output(size_t i, char* array) {
    size_t f = 0;
    while (f < i) {
        printf("%c", array[f]);
        f++;
    }
}

/* 
--------------------------------------------------------------------
Написать программу, осуществляющую перевод в верхний регистр 
первого символа каждого слова, разделенного пробелами в строке.
Строка, заканчивающаяся символом новой строки \n, задается на 
стандартном потоке ввода stdin и состоит из букв латинского алфавита,
цифр и пробелов, которые разделяют слова между собой. Преобразованную
строку вывести на стандартный поток вывода stdout. В конце ответа не 
должно быть переноса на новую строку.
----------------------------------------------------------------------
Пример
This is my time --> This Is My Time
area1234 --> Area1234
*/

