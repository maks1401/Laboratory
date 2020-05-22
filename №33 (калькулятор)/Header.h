#pragma once
#include "MyForm.h"
#include <cmath>

double func1(double x2, double x1, double x0, double x)
{
	return (x2 * (pow(x, 2)) + (x1 * x) + x0);
}
double root1(double x2, double x1, double x0, double a, double b, double e)
{
	double c;
	int i;
	while ((b - a) / 2 > e && i < 20000)
	{
		c = (a + b) / 2;
		if ((func1(x2, x1, x0, a) * func1(x2, x1, x0, c)) > 0) a = c;
		else b = c;
		i++;
	}
	return c;
}

double func2(double x2, double x1, double x0, double x)
{
	return (x2 * (pow(x, 2)) + (x1 * x) + x0);
}
double root2(double x2, double x1, double x0, double e, double x)
{
	double f, df;
	int i = 0;
	do {
		f = func2(x2, x1, x0, x);
		df = 2 * x2 * x + x1;
		x = x - f / df;
		i++;
	} while (fabs(f) > e && i < 20000);
	return x;
}

double func3(double x2, double x1, double x0, double x)
{
	return (-x2 * (pow(x, 2)) - x0) / x1;
}
double root3(double x2, double x1, double x0, double e, double x)
{
	double rez;
	int i=0;
	do
	{
		rez = x;
		x = func3(x2, x1, x0, x);
		i++;
		
	} while (fabs(rez - x) > e && i <20000);
	return x;
}