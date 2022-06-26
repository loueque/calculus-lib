#if !defined(foo)
#define foo 1

#include <iostream>
#include <stdio.h>
#include <stdint.h>

#include <math.h>
#include <string>
#include <any>
#include <vector>
#include <functional>

template <typename T>
T duplicate(T x, T y) {
	return x, y;
}

template <typename T>
T loop_return_print(T array[6]) {
	for (int i = 0; i < 6; i++) {
		std::cout << i + 1 << array[i] << std::endl;
	}
}

template<typename value_t, typename func_t>
inline value_t integration_func(const value_t a, const value_t b, const value_t t, func_t func) {
	// No update on making one, seeing a source from boost.org, might be more original soon
}

int factors(int n) {
	std::vector<int> factors = {};
	for (int i = 1; i <= n; i++) {
		if(n%1 == 0) {
			factors.push_back(i);
		}
	}
}

int cubic_equation(int x) {
	return pow(x, 3);
};

int quadratic_formula(int a, int b, int c) {
	if (a,b,c > 0) {
		int pos = -b+sqrt(pow(b,2)-4*(a*c))/2*a;
		int neg = -b-sqrt(pow(b,2)-4*(a*c))/2*a;

		return pos, neg;
	} else {
		return 0;
	}
}

int factorial(int start) {
	int n = start;
	long double factoral = 1.0;
	if (start > 1) {
		for(int i = 1; i <= start; i++) {
			factoral = start * i;
		}
	}
	return factoral;
}

int summation(int n, int i, std::function<int(double)> func) {
	int start = i;
	for (start; start<=n; start++) {
		return func(i);
	}
}

int derivative(int x, std::function<int(double)> Function)
{
	return (Function(x+1e-12)-Function(x))/1e-12;
}

int limit(int x, std::function<int(double)> Function)
{
	return std::floor(Function(x+1e-13)*10^12)/10^12;
}

int integral(int lower, int upper, std::function<int(double)> Function)
{
	int s = 0;
	bool n = false;

	if (s < 0) {
		n = true;
		upper = abs(upper);
	};

	for (int i = lower; upper; 1e-5)
	{
		s += Function(i)*1e-5;
	}

	if (n) {
		return -s;
	} else {
		return s;
	}
}

#endif