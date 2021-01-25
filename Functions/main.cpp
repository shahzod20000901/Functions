#include <iostream>
using namespace std;
#define delimiter "\n--------------------------------------------------------------------------\n";
const int ROWS = 8;
const int COLS = 5;
void FillRand(int arr[], const int n);
void FillRand(char arr[], const int n);
double FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int z);

int Print(int arr[], const int n);
char Print(char arr[], const int n);
double Print(double arr[], const int n);
int Print(int arr[ROWS][COLS], const int m, const int z);

void Sort(int arr[], const int n);
double Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int z);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int z);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS]);

void minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
void minValueIn(int arr[ROWS][COLS], const int m, const int z);

void maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
void maxValueIn(int arr[ROWS][COLS], const int m, const int z);
void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	char b_arr[n];
	double c_arr[n];
	int d_arr[ROWS][COLS];
	const int m = 8;
	const int z = 5;
	cout << "Элементы одномерного массива; (типа int, char double)";
	cout << delimiter;
	FillRand(arr, n);
	Print(arr, n);
	cout << delimiter;
	FillRand(b_arr, n);
	Print(b_arr, n);
	cout << delimiter;
	FillRand(c_arr, n);
	Print(c_arr, n);
	cout << delimiter;
	cout << "Отсортированный массив;";
	cout << delimiter;
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter;
	Sort(c_arr, n);
	Print(c_arr, n);
	cout << delimiter;
	cout << "Сумма элементов массива: (типа int) " << Sum(arr, n);
	cout << delimiter;
	cout << "Сумма элементов массива: (типа double) " << Sum(c_arr, n);
	cout << delimiter;
	cout << "Средное значения элементов массива: (типа int) "; Avg(arr, n);
	cout << delimiter;
	cout << "Средное значения элементов массива: (типа double) "; Avg(c_arr, n);
	cout << delimiter;
	cout << "Минимальное значения массива: (типа int) "; minValueIn(arr, n);
	cout << delimiter;
	cout << "Минимальное значения массива: (типа double) "; minValueIn(c_arr, n);
	cout << delimiter;
	cout << "Максимальное значения массива: (типа int) "; maxValueIn(arr, n);
	cout << delimiter;
	cout << "Максимальное значения массива: (типа double) "; maxValueIn(c_arr, n);
	cout << delimiter;
	cout << "Перегрузка на двухмерный массив; (Элементы двухмерного массива) " << endl;
	FillRand(d_arr, ROWS, COLS);
	Print(d_arr, ROWS, COLS);
	cout << delimiter;
	cout << "Сумма элементов двухмерного массива: " << Sum(d_arr, ROWS, COLS);
	cout << delimiter;
	cout << "Средное значения двухмерного массива: "; Avg(d_arr);
	cout << delimiter;
	cout << "Отсортированный двухмерный массив; ";
	cout << delimiter;
	Sort(d_arr, ROWS, COLS);
	Print(d_arr, ROWS, COLS);
	cout << delimiter;
	cout << "Минимальное значения двухмерного массива: "; minValueIn(d_arr, ROWS, COLS);
	cout << delimiter;
	cout << "Максимальное значения двухмерного массива: "; maxValueIn(d_arr, ROWS, COLS);
}
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

void minValueIn(int arr[], const int n)
{
	int a = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < a)
		{
			a = arr[i];
		}
	}
	cout << a;
}
double minValueIn(double c_arr[], const int n)
{
	double a = c_arr[0];
	for (int i = 0; i < n; i++)
	{
		if (c_arr[i] < a)
		{
			a = c_arr[i];
		}
	}
	cout << a;
	return 0;
}
void minValueIn(int d_arr[ROWS][COLS], const int m, const int z)
{
	int c = d_arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < z; j++)
		{
			if (d_arr[i][j] < c)
			{
				c = d_arr[i][j];
			}
		}
	}
	cout << c;
}

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

/*Перегрузить фунции Sort, Sum, Avg, minValueIn, maxValueIn
для одномерного и двумерного массива типа int, char и double.
По возможности залить код на GitHub, и прислать ссылку на репозиторий,
если не получится, то присылайте как обычно *.cpp-файл.*/