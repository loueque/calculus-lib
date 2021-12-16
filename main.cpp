#include <iostream>
#include <strstream>

#include <math.h>
#include <string>
#include <any>
#include <vector>

std::vector<std::string> split_string(std::string);

int cubic_equation(int x) {
	return std::pow(x, 3);
}

int quadratic_formula(int a, int b, int c) {
	if (a,b,c > 0) {
		return -b+std::sqrt(std::pow(b,2)-4*(a*c))/2*a;
	}
}

int sum_series(int n, int i, int (*func)(...)) {
	int start = i;
	for (start; start<=n; start++) {
		func(i);
	}
}

int main() {
	//std::cout << sum_series(4, 1, int add(int i) {return i+2}) << std::endl;
	return 0;
}
