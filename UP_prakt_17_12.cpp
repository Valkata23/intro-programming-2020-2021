//# define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;
const int MAX_SIZE = 32;

int len(const char str[MAX_SIZE])
{
	int lenth = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		lenth++;
	}
	return lenth;
}

void small_leters(char source[MAX_SIZE], char result[MAX_SIZE])
{
	int i = 0, j = 0;
	while (source[i] != '\0')
	{
		if (source[i] >= 'a' && source[i] <= 'z')
		{
			result[j] = source[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
}

void replace_symbol(char source[MAX_SIZE], char symbol1, char symbol2)
{
	int i = 0;
	while (source[i] != '\0')
	{
		if (source[i] == symbol1)
		{
			source[i] = symbol2;
		}
		i++;
	}
}

void remove_symbol(char source[MAX_SIZE], char symbol1)
{
	for (int i = 0; source[i] != '\0'; i++)
	{
		if (source[i] == symbol1)
		{
			for (int j = i; source[j] != '\0'; j++)
			{
				source[j] = source[j + 1];
			}
		}
	}
}

bool is_palindrome(const char source[MAX_SIZE])
{
	int lenth = len(source);
	for (int i = 0; i < lenth / 2; i++)
	{
		if (source[i] != source[lenth - 1 - i])
		{
			return  false;
		}
	}
	return true;
}
char get_first_unique_char(const char* str)
{
	bool is_unique = true;
	int lenght = len(str);
	for (int i = 0; i < lenght - 1; i++)
	{
		for (int j = i + 1; j < lenght; j++)
		{
			if (str[i] == str[j])
			{
				is_unique = false;

			}
		}
		if (is_unique)
		{
			return str[i];
		}
		is_unique = true;
	}
	return '0';
}

void swap(char&a, char&b)
{
	char temp = a;
	a = b;
	b = temp;
}

void reverse_string(char source[MAX_SIZE])
{
	int lenth = len(source);
	for (int i = 0; i < lenth / 2; i++)
	{
		swap(source[i], source[lenth - 1 - i]);
	}
}

void concat(char* str1, char* str2, char*result)
{
	int lenth1 = len(str1);
	int lenth2 = len(str2);
	for (int i = 0; i < lenth1; i++)
	{
		result[i] = str1[i];
	}
	for (int i = 0; i < lenth1; i++)
	{
		result[i] = str2[i - lenth1];
	}

}

int main()
{
	//zadacha1
	/*
	char str[MAX_SIZE] = "gosho42";
	cout << len(str);
	*/

	//zadacha2
	/*
	char str1[MAX_SIZE];
	char str2[MAX_SIZE];
	cin >> str1;
	small_leters(str1, str2);
	cout << str2 << endl;
	*/

	//zadacha3
	/*
	char str1[MAX_SIZE];
	cin >> str1;
	replace_symbol(str1,'a','f');
	cout << str1 << endl;
	*/
	//zadacha4
	/*
	char str1[MAX_SIZE];
	cin >> str1;
	remove_symbol(str1, 'l');
	cout << str1 << endl;
	*/
	//zadacha5
	/*
	char str1[MAX_SIZE];
	cin >> str1;
	cout << boolalpha << is_palindrome(str1);
	*/
	//zadacha6
	//cout << get_first_unique_char("pepsii");

	//zadacha 7
	/*
	char str1[MAX_SIZE];
	cin >> str1;
	reverse_string(str1);
	cout << str1<<endl;
	*/
	//Теория

	/*char str[MAX_SIZE];
	cin.getline(str, 20);
	cout << strlen(str);
	*/
	/*
	char str1[MAX_SIZE];
	char str2[MAX_SIZE];
	cin >> str1 >> str2;
	strcpy_s(str1, str2);
	cout << str1 << " " << str2;
	*/
	/*
	char str1[MAX_SIZE];
	char str2[MAX_SIZE];
	cin >> str1 >> str2;
	cout << strcmp(str1, str2);
	*/
	
	char str1[MAX_SIZE];
	char str2[MAX_SIZE];
	char str3[MAX_SIZE];
	cin >> str1 >> str2;
	strcat(str1, str2, str3);
	cout << str3;
	


	return 0;
}
