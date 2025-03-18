#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

double compute_limit(double dx)
{
	double a = -1.0, b = 1.0; // пределы интегрирования
	int N = (b - a) / dx;      // Вычисляем N

	// суммируем площади треугольников
	double sum = 0;
	for (int i = 0; i < N; ++i)
	{
		double x = a + i * dx; // вычисляем x_i
		sum += sqrt(1 - x * x) * dx; // добавляем площадь прямоугольника
	}
	return sum; // возвращаем значение интеграла(площадь)
}


int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << std::fixed << std::setprecision(10);

	double eps = 1e-6;
	std::cout << "Точность: " << eps << std::endl;

	double dx;
	std::cout << "Введите dx: ";
	std::cin >> dx;

	double a = -1.0, b = 1.0; // пределы интегрирования
	
	do {
		int N = (b - a) / dx;      // Вычисляем N
		if (N > eps) {
			std::cout << "Недостаточная точность!" << std::endl;
			std::cout << "Введите меньше dx: ";
			std::cin >> dx;
		}
	}
	while (dx > eps);

	double half_pi = compute_limit(dx);
	double pi = 2 * half_pi;
	std::cout << "Pi = " << pi << std::endl;
	std::cout << "Точное значение: " << M_PI << std::endl;
	return 0;
}
