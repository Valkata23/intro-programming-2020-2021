#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int Max_Size = 128;

int main()
{

	/*
	int n;
	cin >> n;
	double sum = 0;
	int array[Max_Size];
	for (size_t i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	//prqka selekciq - smenqva pyrviq s posledniq ako e po malyk
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = i; j < n; j++)
		{
			if (array[i]>array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

		}
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << array[i] << " ";

	}
	*/

	/*
	int n;
	cin >> n;
	int array[Max_Size];
	for (size_t i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	//metod na mehurcheto
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}

		}
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << array[i] << " ";

	}
	*/

	//matrici

	//zadacha 2

	/*
	int matrix[Max_Size][Max_Size];
	int n, m, sum = 0;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n ;j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			sum += matrix[i][j];
		}
	}
	cout << "Sum of matrix elements: "<<setprecision(2)<<sum<<", average of matrix elements: " << sum * 1.0 / (n*n);
	*/

	//zadacha 3 - min & max v matrica

	/*
	int n, m;
	int matrix[Max_Size][Max_Size];
	int max_Element = INT32_MIN;
	int min_Element = INT32_MAX;
	cin >> n >> m;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m;j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (matrix[i][j] < min_Element)
			{
				min_Element = matrix[i][j];
			}
			if (matrix[i][j] > max_Element)
			{
				max_Element = matrix[i][j];
			}
		}
	}
	cout << "Max= " << max_Element <<endl<< "Min= " << min_Element;
	*/

	//zadacha 4

	/*
	int n;
	double result;
	bool requirements = true;
	cin >> n;
	int matrix[Max_Size][Max_Size];
	int sum_main_diagonal = 0;
	int sum_bewol_main_diagonal = 0;
	int sum_above_main_diagonal = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n;j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j)
			{
				if (matrix[i][j] % 3 == 0)
				{
					sum_main_diagonal += matrix[i][j];
				}
				else
				{
					requirements = false;
				}
			}

			if (i > j)
			{
				if (matrix[i][j] % 2 == 0)
				{
					sum_bewol_main_diagonal += matrix[i][j];
				}
				else
				{
					requirements = false;
				}
			}

			if (i < j)
			{
				if (matrix[i][j] % 4 == 0)
				{
					sum_above_main_diagonal += matrix[i][j];
				}
				else
				{
					requirements = false;
				}
			}
		}
	}
	cout << endl;
	result = (sum_main_diagonal / 3) + (sum_bewol_main_diagonal / 2) + (sum_above_main_diagonal / 4);
	if (requirements == true)
	{
		cout << result;
	}
	else
	{
		cout << "Elements does not meet the requirements.";
	}
	*/

	//zadacha 5

	/*
	int matrix[Max_Size][Max_Size];
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n;j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n;j++)
		{
			if (matrix[i][j]== matrix[j][i])
			{
			}
		}
	}
	*/

	return 0;
}
