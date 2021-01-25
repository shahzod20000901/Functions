#include "Functions.h"

void maxValueIn(int arr[], const int n)
{
	int a = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > a)
		{
			a = arr[i];
		}
	}
	cout << a;
}
double maxValueIn(double c_arr[], const int n)
{
	double a = c_arr[0];
	for (int i = 0; i < n; i++)
	{
		if (c_arr[i] > a)
		{
			a = c_arr[i];
		}
	}
	cout << a;
	return 0;
}
void maxValueIn(int d_arr[ROWS][COLS], const int m, const int z)
{
	int c = d_arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < z; j++)
		{
			if (d_arr[i][j] > c)
			{
				c = d_arr[i][j];
			}
		}
	}
	cout << c;
}