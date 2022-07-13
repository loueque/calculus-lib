#include <iostream>
#include <math.h>
#include "includes/calculus_lib.h"
#include <functional>

int over_x(int x)
{
	return x/1;
}

int main() {
	int m = limit(3, over_x);
	std::cout << m << std::endl;
	return 0;
}
