#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int task1();
int task2();
int task3();

int main() {
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
	task3();
	return 0;
}

int task1()
{
	printf("Задача 1\n\n");
	printf("123\n");
	printf("1\n\t2\n\t\t3\n");
	printf("%d\n\t%d\n\t\t%d\n\t\t\t%d\n", 1, 2, 3, 4);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Произведение %d на %d равно %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить на %e равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%f разделить на %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%f разделить на %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%e разделить на %e равно %e\n ", 5., 2000000., 5. / 2000000);
	return 0;
}

int task2()
{
	int N = 4, K = 5;
	printf("\nЗадача 2\n\n");
	printf("Поезд %d часов и %d минут\n", N, K);
	printf("Всего %d минут в пути\n", N * 60 + K);
	printf("До конца суток %d часов и %d минут\n", 12 - N - 1, 60 - K);
	printf("В 8.00 поезд %d часов\n", (((N * 4) * 60) * K) * 60);
	printf("Прошло час = %.3f суток и прошло минут = %.2f часа\n", N / 24.0, K / 60.0);
	return 0;
}

int task3()
{
	int n, request;

	printf("\nЗадача 3\n\n");
	printf("Введите число N (N < 1000): ");
	scanf("%d", &n);

	printf("Введите 1, чтобы узнать первую цифру, или 2, чтобы узнать последнюю: ");
	scanf("%d", &request);

	if (request == 1) {
		int first_digit = n;
		while (first_digit >= 10) {
			first_digit /= 10;
		}
		printf("Первая цифра числа %d: %d\n", n, first_digit);
	}
	else if (request == 2) {
		int last_digit = n % 10;
		printf("Последняя цифра числа %d: %d\n", n, last_digit);
	}
	else {
		printf("Неверный запрос. Нужно ввести 1 или 2.\n");
	}

	return 0;
}