#include <stdio.h>
#include <math.h>

/**
* @brief Рассчитывает переменную а по заданной формуле
* @param x - значение константы х
* @param y - значение константы y
* @param z - значение константы z
* @return рассчитанное значение
*/
double getA(const double x, const double y, const double z);

/**
* @brief Рассчитывает переменную b по заданной формуле
* @param x - значение константы х
* @param y - значение константы y
* @param z - значение константы z
* @return рассчитанное значение
*/
double getB(const double x, const double y, const double z);

/**
* @brief Точка входа в программу.
* @return 0 в случае успеха.
*/
int main()
{
	const double x = 0.123;
	const double y = 1.2;
	const double z = 2.5;
	const double a = getA(x, y, z);
	printf("a = %f, b = %f", a, getB(a, y, z));
	return 0;
}

double getA(const double x, const double y, const double z)
{
	return pow(x, 2) + exp(y) + cbrt(z + x);
}

double getB(const double x, const double y, const double z)
{
	return log(x + y + z) + 1.0 / 2 * z;
}
