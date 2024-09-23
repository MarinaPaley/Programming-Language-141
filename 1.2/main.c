#include <stdio.h>
#include <locale.h>

/**
* @brief ������������ ������� ��������������.
* @param length ����� ��������������.
* @param width ������ ��������������.
* @return ������� ��������������.
*/
double GetArea(const double length, const double width);

/**
* @brief ������������ �������� ��������������.
* @param length ����� ��������������.
* @param width ������ ��������������.
* @return �������� ��������������.
*/
double GetPerimetr(const double length, const double width);

/**
* @brief ��������� ������������ �����.
* @return ������������ �����.
*/
double Input(void);

/**
* @brief ����� ����� � ���������.
* @return ��� ������.
*/
int main(void)
{
	setlocale(LC_ALL, "Russian");
	puts("������� ����� ��������������");
	double length = Input();
	puts("������� ������ ��������������");
	double width = Input();
	double area = GetArea(length, width);
	double perimetr = GetPerimetr(length, width);
	printf_s("������� �������������� %lf", area);
	printf_s("\n�������� �������������� %lf", perimetr);

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
