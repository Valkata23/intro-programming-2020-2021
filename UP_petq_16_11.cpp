#include "pch.h"
#include <iostream>
using namespace std;

const int Max_Size = 256;

int main()
{	/*
	char coridor[Max_Size];
	coridor[3] = '#';
	if (coridor[3]='#')
	{
		cout << "Yes";
	}
	*/

	/*
	int numbers[50];
	int n;
	double sum = 0.0, avg;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> numbers[i];
		sum += numbers[i];
	}
	avg = sum / n;
	double min_difference = abs(numbers[0] - avg);
	int closed_to_avg = numbers[0];

	for (size_t i = 0; i < n; i++)
	{
		int current = abs(numbers[i] - avg);
		if (min_difference > current)
		{
			min_difference = current;
			closed_to_avg = numbers[i];
		}
	}
	int lower_than_avg[50];
	int lower_index = 0;
	int greater_than_avg[50];
	int greater_index = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (numbers[i] > avg)
		{
			greater_than_avg[greater_index++] = numbers[i];
		}
		else if (numbers[i] < avg)
		{
			lower_than_avg[lower_index++] = numbers[i];
		}
		else
		{
			continue;
		}
	}

	cout << "Lower: " << endl;
	cout << "==========" << endl;
	cout << "[";
	for (size_t i = 0; i < lower_index; i++)
	{
		if (i!=lower_index-1)
		{
			cout << lower_than_avg[i] << ", ";
		}
		else
		{
			cout << lower_than_avg[i];
		}
	}
	cout << "]";


	cout << "Greater: " << endl;
	cout << "==========" << endl;
	cout << "[";
	for (size_t i = 0; i < greater_index; i++)
	{
		if (i != lower_index - 1)
		{
			cout << greater_than_avg[i] << ", ";
		}
		else
		{
			cout << greater_than_avg[i];
		}
	}
	cout << "]";
	*/

	//vsqkavi smetki po diagonali nad pod glaven

	/*
	int matrix[Max_Size][Max_Size] = { {1,2,3},{4,5,6},{7,8,9} };
	int n=3;


	int sum_main_diagonal = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j)
			{
				sum_main_diagonal += matrix[i][j];
			}
		}

	}
	cout << sum_main_diagonal << endl;

	int sum_bewol_main_diagonal = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			//s <= shte vzeme i glavniq diagonal
			if (i > j)
			{
				sum_bewol_main_diagonal += matrix[i][j];
			}
		}

	}
	cout << sum_bewol_main_diagonal << endl;

	int sum_above_main_diagonal = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i < j)
			{
				sum_above_main_diagonal += matrix[i][j];
			}
		}

	}
	cout << sum_above_main_diagonal << endl;

	int sum_secon_diagonal = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i + j==n-1)
			{
				sum_secon_diagonal += matrix[i][j];
			}
		}

	}
	cout << sum_secon_diagonal << endl;

	int sum_bewol_second_diagonal = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i + j >=n)
			{
				sum_bewol_second_diagonal += matrix[i][j];
			}
		}

	}
	cout << sum_bewol_second_diagonal << endl;

	int sum_above_second_diagonal = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i + j <= n-2)
			{
				sum_above_second_diagonal += matrix[i][j];
			}
		}

	}
	cout << sum_above_second_diagonal << endl;

	bool result = (sum_main_diagonal == sum_secon_diagonal);
	cout << result;
	*/


	int matrix[3][5] = { 1,2,3,4,5,2,4,6,8,10,3,6,9,12,14 };
	int Tmatrix[5][3] = {0};
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			Tmatrix[j][i] = matrix[i][j];
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << Tmatrix[i][j] << " ";
		}
		cout << endl;
	}





	return 0;
}
