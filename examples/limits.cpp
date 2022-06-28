#include <iostream>
#include <math.h>
#include <cmath>
#include <includes/library.h>

int func_1(int x)
{
	return 1/x;
}

int func_2(int x)
{
	return x^2/x^10-5;
}

int func_3(int x)
{
	return std::cos(x)+std::tanf(x)/2;
}

int main() {
	int one = limit(4, func_1);
	int two = limit(2, func_2);
	int three = limit(11, func_3);

	std::cout << "limit one " << one << std::endl;
	std::cout << "limit two " << two << std::endl;
	std::cout << "limit three " << three << std::endl;
	return 0;
}
