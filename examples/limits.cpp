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

void FuncTest() {
	int one = limit(4, func_1);
	int two = limit(2, func_2);
	int three = limit(11, func_3);

	std::cout << "limit one " << one << std::endl;
	std::cout << "limit two " << two << std::endl;
	std::cout << "limit three " << three << std::endl;
}

int main() {
	FuncTest();
	int array[9] = {-4, -3, -2, -1, 0, 1, 2, 3, 4};
	for (int i = 0; i < 9; i++)
	{
		if(i%2==0) {
			std::cout << (i/4)*pow(i, 2) << std::endl;
		} else {
			std::cout << pow(i, 4)/3 << std::endl;
		}
	}
	
	return 0;
}
