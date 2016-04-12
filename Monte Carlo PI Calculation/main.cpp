#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <random>


int main()
{
	srand(time(nullptr));
	const int n = 100000000;
	int sum = 0, ran = 0;
	const int area = 4;
	float min = 0.0f, max = 1.0f;
	double x_ran, y_ran;
	float pi = 0;

	std::cout << "Calculating PI: ";

	std::random_device ran_d;
	std::mt19937 gen(ran_d());
	std::uniform_real_distribution<double> num(0, std::nextafter(1, DBL_MAX));

	for (int i = 0; i < n; i++)
	{
		x_ran = num(gen);
		y_ran = num(gen);
		if (((x_ran * x_ran) + (y_ran * y_ran)) <= 1)
			sum++;
	}

	pi = area * ((float)sum / n);

	std::cout << pi << std::endl;
}