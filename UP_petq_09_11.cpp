#include "pch.h"
#include <iostream>
using namespace std;
const int Max_Value = 128;

int main()
{
	//konrtolno po praktikum 26  

	/*
	int trees[Max_Value] = { 0 };
	int n; //amount of trees
	do
	{
		cout << "Enter a number between 0 and 100: ";
		cin >> n;
	} while (!cin || (0 > n || n >= 100));
	for (int i = 0; i < n; i++)
	{

		do
		{
			cout << "Enter heith for tree " << i + 1 << "[0,100]: ";
			cin >> trees[i];
		} while (trees[i] < 0 || trees[i] > 100);
	}
	cout << "Greta's trees!" << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << trees[i] << " ";
		}

	}
	cout << endl;
	cout << "Greta's mom trees!" << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			cout << trees[i] << " ";
		}
	}
	*/

	/*
	int trees[Max_Value] = { 0 };
	int n; //amount of trees
	do
	{
		cout << "Enter a number between 0 and 100: ";
		cin >> n;
	} while (!cin || (0 > n || n >= 100));
	for (int i = 0; i < n; i++)
	{

		do
		{
			cout << "Enter heith for tree " << i + 1 << "[0,100]: ";
			cin >> trees[i];
		} while (trees[i] < 0 || trees[i] > 100);
	}
	bool flag = true;
	for (int i = 0; i < n && flag; i++)
	{
		for (int j = -i + 1; j < n; j++)
		{
			if (trees[i]==trees[j])
			{
				flag = false;
				break;
			}
		}
	}
	cout << boolalpha << flag;
	*/

	//zaacha kupuva laptop

	/*
	int usb_ports, gb_ram;
	double price;
	bool has_ssd = true;

	cout << "Price ";
	cin >> price;

	cout << "USB ports: ";
	cin >> usb_ports;

	cout << "GB RAM:  ";
	cin >> gb_ram;

	cout << "Has SSD: ";
	cin >> has_ssd;

	bool going_to_buy1 = (price >= 1000 && price <= 1500
		&& usb_ports >= 3
		&& gb_ram >= 8
		&& has_ssd);
	bool going_to_buy2 = (has_ssd == false
		|| gb_ram < 8)
		&& price <= 800;

	bool result = (going_to_buy1) || (going_to_buy2);
	cout << boolalpha << result;
	*/


	/*
	int number, first_digit, second_digit, third_digit, fourth_digit;
	bool result;

	do
	{
		cin >> number;
	} while (!cin || number <= 1000 && number >= 9999);

	first_digit = number / 1000;
	second_digit = number / 100 % 10;
	third_digit = number / 10 % 10;
	fourth_digit = number % 10;
	
	result = (first_digit % 2 == 0);
	
	if (result)
	{
		if (first_digit > second_digit &&first_digit > third_digit&&first_digit > fourth_digit)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else 
	{
		cout << "NO";
	}
	*/






	return 0;
}
