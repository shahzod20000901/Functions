#include "Functions.h"

int Sum(int arr[], const int n)
{
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		a += arr[i];
	}
	return a;
}
double Sum(double c_arr[], const int n)
{
	double a = 0;
	for (int i = 0; i < n; i++)
	{
		a += c_arr[i];
	}
	return a;
}
int Sum(int d_arr[ROWS][COLS], const int m, const int z)
{
	int b = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < z; j++)
		{
			b += d_arr[i][j];
		}
	}
	return b;
}