#include <stdio.h>
#include<locale.h>

int main() {
    zad1();
    zad2();
    zad3();
    return 0;
}

int zad1() {
    setlocale(LC_CTYPE, "ru_RU.UTF-8");
    printf("Задание 1\n");
    printf("\n");
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Значения по умолчанию:\n");
    printf("c=%c\n", c);
    printf("i = % d\n",i);
    printf("f = % f\n", f);
    printf("d = % e\n", d);
    printf("\n");

    printf("Ввод значений\n");
    printf("Введите символ c: \n");
    scanf("%c", &c);

    printf("Введите целое число i: \n");
    scanf("%d", &i);

    printf("Введите дробное число f: \n");
    scanf("%f", &f);

    printf("Введите вещественное число d: \n");
    scanf("%lf", &d);

    printf("\n");
    printf("Результаты вычислений:\n");
    printf("Целая часть: %d\n", (int)f);
    printf("Дробная часть: %f\n", f - (int)f);
    printf("Шестнадцатеричный и десятичный код : dec=%d hex=%x\n", c, c, c);
    printf("десятичное число, 1/i = %f\n", 1.0 / i);
    printf("\n");

    return 0;
}

int zad2() {
    printf("Задание 2\n");
    printf("\n");
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("a = %d, b = %d\n", a, b);
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);

    printf("\n--- Явное преобразование ---\n");
    printf("(дробное число)a/b  = %f\n", (float)a / b);
    printf("(вещественное число)a/b = %f\n", (double)a / b);
    printf("\n");

    return 0;
}

int zad3() {
    printf("Задание 3\n");
    printf("\n");

    int n;
    printf("Введите трехзначное число:\n");
    scanf("%d",&n);
    printf("Последняя цифра вашего числа:\n");
    printf("%d\n",n%10);
    printf("Первая цифра вашего числа:\n");
    printf("%d\n",n/100);
    printf("Сумма цифр вашего числа:\n");
    printf("%d\n",n%10+n/100+(n/10)%10);
    printf("Число наоборот:\n");
    printf("%d\n",n%10*100+((n / 10) % 10)*10+n/100);

    return 0;
}