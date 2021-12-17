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

double getValueAt(double x, const std::vector<double> &coeffs) {
    double total = 0;

    double xToTheI = 1;
    for (unsigned i = 0; i < coeffs.size(); i++) {

        total += coeffs[i] * xToTheI;

        xToTheI *= x;
    }
    return total;
}

class Calculus {
	public:

	private:

	protected:
};

#endif