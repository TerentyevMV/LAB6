#include <stdio.h>
#include <locale.h>

int task1();
double task2();
int task3();

int main() {

	// Кодировка
	setlocale(LC_ALL, ".UTF-8");

	task1();
	task2();
	task3();

	return 0;
}

int task1() {

	int years;

	puts("Введите интересующий год:");
	scanf("%d", &years);

	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
		printf("год %d високосный\n", years);
	else
		printf("год %d не високосный\n", years);

	return 0;
}

double task2() {

	double x;

	puts("Введите значение x:");
	scanf("%lf", &x);

	printf("Результат функции: %.3lf\n", 
		x > 7 
		? 1 / (x - 7) 
		: -3 * x + 9);

	return 0.;
}

int task3() {

	int number;

	puts("Введите четырехзначное число:");
	scanf("%d", &number);

	int first = number / 1000;
	int second = number % 1000 / 100;
	int third = number % 100 / 10;
	int fourth = number % 10;

    int temp;

    // Шаг 1: сортируем a и b
    if (first > second) {
        temp = first;
        first = second;
        second = temp;
    }

    if (third > fourth) {
        temp = third;
        third = fourth;
        fourth = temp;
    }

    // Шаг 3: сравниваем a и c
    if (first > third) {
        temp = first;
        first = third;
        third = temp;
    }

    // Шаг 4: сравниваем b и d
    if (second > fourth) {
        temp = second;
        second = fourth;
        fourth = temp;
    }

    // Шаг 5: сравниваем b и c
    if (second > third) {
        temp = second;
        second = third;
        third = temp;
    }

    printf("Цифры в порядке возрастания: %d %d %d %d\n", first, second, third, fourth);

    return 0;
}
