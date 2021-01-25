#include "Functions.h"

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
double Sort(double c_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (c_arr[i] < c_arr[j])
			{
				double buffer = c_arr[i];
				c_arr[i] = c_arr[j];
				c_arr[j] = buffer;
			}
		}
	}
	return 0;
}
void Sort(int d_arr[ROWS][COLS], const int m, const int z)
{
	for (int k = 0; k < m; k++)
	{
		for (int l = 0; l < z; l++)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < z; j++)
				{
					if (i + 1 == m and j + 1 == z)
					{
						continue;
					}
					else
					{
						if (j + 1 == z and d_arr[i][j] > d_arr[i + 1][0])
						{
							int buffer = d_arr[i][j];
							d_arr[i][j] = d_arr[i + 1][0];
							d_arr[i + 1][0] = buffer;
						}
						else
						{
							if (d_arr[i][j] > d_arr[i][j + 1])
							{
								int buffer = d_arr[i][j];
								d_arr[i][j] = d_arr[i][j + 1];
								d_arr[i][j + 1] = buffer;
							}
						}
					}
				}

			}
		}
	}
}