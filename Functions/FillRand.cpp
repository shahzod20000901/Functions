#include "Functions.h"

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(int d_arr[ROWS][COLS], const int m, const int z)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < z; j++)
		{
			d_arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char b_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		b_arr[i] = rand() % 100;
	}
}
double FillRand(double c_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		c_arr[i] = rand() % 100 / (double)n;
	}
	return 0;
}