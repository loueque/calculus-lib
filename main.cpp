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

int quadratic_formula(int a, int b, unsigned int c) {
	if (a,b,c > 0) {
		return -b+std::sqrt(std::pow(b,2)-4*(a*c))/2*a;
	}
}

int sum_series(int n, int i, int (*func)(int, int)) {
	i = 1;
	for (i; i<=n; i++) {
		func(i, 2);
	}
}

std::any main() {
	return 0;
}
