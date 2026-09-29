#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_CTYPE, "RUS");

	float I, U, R;

	printf("Введите значение напряжения -> ");
	scanf("%f", &U);
	printf("Введите значение сопротивления -> ");
	scanf("%f", &R);

	I = U / R;
	printf("Сила тока равна -> %.2f", U/R);
}
