#include "Functions.h"



int Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}
char Print(char b_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << b_arr[i] << "\t";
	}
	return 0;
}
double Print(double c_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << c_arr[i] << "\t";
	}
	return 0;
}
int Print(int d_arr[ROWS][COLS], const int m, const int z)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < z; j++)
		{
			cout << d_arr[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}



/*����������� ������ Sort, Sum, Avg, minValueIn, maxValueIn
��� ����������� � ���������� ������� ���� int, char � double.
�� ����������� ������ ��� �� GitHub, � �������� ������ �� �����������,
���� �� ���������, �� ���������� ��� ������ *.cpp-����.*/