#include <math.h>
#include <stdio.h>

int main() {
  int p = 21500;
  double r;
    if (scanf("%lf", &r) == 1) {
      double v = (4. / 3.) * M_PI * pow(r, 3);
      double m = p * v;
      double rounded_mass = round(m);
      printf("%.0lf", rounded_mass);
    } else {
      printf("n/a");
      return 0;
    }
}

/* Найти массу шара. Радиус шара вводиться в консоль ( радиус имеет тип double).
Плотность шара = 21500 кг/м^3
Даны формулы:
V = (4/3) * pi * R^3
P = m / V
Вывести массу округлив ее до целого числа математически верно.
Примечание:
Использовать константу M_PI, и функцию double round(double) из библиотеки math.h
Вывод должен выглядеть так:
printf("%.0lf", result); 
r = 1, 10.    

1. Посчитать обьем шара
2. Вывести формулу массы, посчитать
3. Вывести результат
4. Сделать проверку на корректность ввода
5. Cpplint
6. Test for leaks */