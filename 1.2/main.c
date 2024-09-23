#include <stdio.h>
#include <locale.h>

/**
* @brief Рассчитывает площадь прямоугольника.
* @param length Длина прямоугольника.
* @param width Ширина прямоугольника.
* @return Площадь прямоугольника.
*/
double GetArea(const double length, const double width);

/**
* @brief Рассчитывает периметр прямоугольника.
* @param length Длина прямоугольника.
* @param width Ширина прямоугольника.
* @return Периметр прямоугольника.
*/
double GetPerimetr(const double length, const double width);

/**
* @brief Считывает вещественное число.
* @return Вещественное число.
*/
double Input(void);

/**
* @brief Точка входа в программу.
* @return Код ошибки.
*/
int main(void)
{
	setlocale(LC_ALL, "Russian");
	puts("Введите длину прямоугольника");
	double length = Input();
	puts("Введите ширину прямоугольника");
	double width = Input();
	double area = GetArea(length, width);
	double perimetr = GetPerimetr(length, width);
	printf_s("Площадь прямоугольника %lf", area);
	printf_s("\nПериметр прямоугольника %lf", perimetr);

	return 0;
}

double GetArea(const double length, const double width)
{
	return length * width;
}

double GetPerimetr(const double length, const double width)
{
	return (length + width) * 2;
}

double Input(void)
{
	double value;
	scanf_s("%lf", &value);
	return value;
}
