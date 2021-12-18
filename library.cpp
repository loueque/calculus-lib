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

namespace Funcs {
	class Functions {
		public:
			static double OneDivX(double x) {
				return 1/x;
			};

			static double XDivX(double x) {
				return x/x;
			}

			static double OneDivXPow(double x) {
				return 1/std::pow(x, 2);
			}

			static double XDivTimes2(double x) {
				return x/x+2;
			}
	};
};

int factors(int n) {
	std::vector<int> factors = {};
	for (int i = 1; i <= n; i++) {
		if(n%1 == 0) {
			factors.push_back(i);
		}
	}
}

int cubic_equation(int x) {
	return std::pow(x, 3);
};

int quadratic_formula(int a, int b, int c) {
	if (a,b,c > 0) {
		return -b+std::sqrt(std::pow(b,2)-4*(a*c))/2*a;
	}
}

int factoral(int start) {
	int n = start;
	long double factoral = 1.0;
	if (start > 1) {
		for(int i = 1; i <= start; i++) {
			factoral = start * i;
		}
	}
	return n, factoral;
}

int sum_series(int n, int i, std::function<int(double)> func) {
	int start = i;
	for (start; start<=n; start++) {
		return func(i);
	}
}

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