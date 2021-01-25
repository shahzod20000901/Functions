#include "Functions.h"

double Avg(int arr[], const int n)
{
	double d = 0;
	d += (double)Sum(arr, n) / n;
	cout << d;
	return d;
}
double Avg(double c_arr[], const int n)
{
	double d = 0;
	d += Sum(c_arr, n) / n;
	cout << d;
	return d;
}
double Avg(int d_arr[ROWS][COLS])
{
	double d;
	d = (double)Sum(d_arr, ROWS, COLS) / (ROWS * COLS);
	cout << d;
	return d;
}