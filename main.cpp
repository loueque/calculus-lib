#include <iostream>
#include <stdio.h>
#include <stdint.h>

#include <math.h>
#include <string>
#include <any>
#include <vector>
#include <functional>

std::vector<std::string> split_string(std::string);

int cubic_equation(int x) {
	return std::pow(x, 3);
};

int quadratic_formula(int a, int b, int c) {
	if (a,b,c > 0) {
		return -b+std::sqrt(std::pow(b,2)-4*(a*c))/2*a;
	}
};

int sum_series(int n, int i, std::function<int(double)> func) {
	int start = i;
	for (start; start<=n; start++) {
		return func(i);
	}
};

int add(int a) {
	return a+1;
}
