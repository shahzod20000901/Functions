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
#pragma once
