#include <iostream>

template <typename T>
T duplicate(T x, T y);

template <typename T>
T loop_return_print(T array[6]);

int factors(int n);

int cubic_equation(int x);

int quadratic_formula(int a, int b, int c);

int factorial(int start);

int sum_series(int n, int i, std::function<int(double)> func);
