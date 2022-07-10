#include <iostream>
#include <include/calculus_lib.h>
#include <functional>

int over_x(int x)
{
	return 1/x;
}

int main() {
	int m = integral(2, 4, over_x);
	std::cout << m << std::endl;
	return 0;
}
