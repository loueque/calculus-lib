#pragma

#include <iostream>
#include <functional>

template <typename T>
T duplicate(T x, T y);

template <typename T>
T loop_return_print(T array[6]);

int factors(int n);

int cubic_equation(int x);

int quadratic_formula(int a, int b, int c);

int vertex_of_a_function(int a, int b, int c);

int factorial(int start);

int summation(int start, int end, std::function<int(int)> Function);

int product(int start, int end, std::function<int(int)> Function);

int derivative(int x, std::function<int(int)> Function);

int limit(int x, std::function<int(int)> Function);

int Lhopital(int approach, std::function<int(int)> Function_One, std::function<int(int)> Function_Two);

int integral(int lower, int upper, std::function<int(int)> Function);
