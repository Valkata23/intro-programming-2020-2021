#include "pch.h"
#include <iostream>

const int MAX_SIZE = 64;

bool is_chronograph(char*watch) 
{
	int i = 0;
	while (watch[i]!=' ')
	{
		i++;
	}
	//i=' 'Rolex 323gtuHsdk
	for (size_t j = i+1;watch[j] != '\0'; j++)
	{
		if (watch[j]=='h')
		{
			return true;
		}

	}
	return false;
}

bool is_sub_str(char*brand, char*watch) 
{
	int i = 0;
	return true;
}

void print_model(char* brand) 
{
	const char* watch1 = "Rolex sh546";
	const char* watch2 = "Casio gShock";
	const char* watch3 = "Bretling 123hut";

	while (true)
	{

	}
}

int main()
{
	//низове
	//char* name;//колко со искаме 
	//масив от чаровею(символи)
	//char family_name[32];//31 + '\0'
	//Разликата м/у масив от символи и низ
	//-при низа не се грижим за заделянето на памет за '\0'

	/*
	char supitem[10] = "table";
	char* item = supitem;
	std::cout << item << std::endl;//table
	std::cout << *item << std::endl;//'t'
	std::cout << &item << std::endl;//adress item
	std::cout << &supitem << std::endl;//adress supitem
	std::cout << &*item << std::endl;//table
	std::cout << *&item << std::endl;//table
	std::cout << **&item << std::endl;//'t'
	std::cout << &**&item << std::endl;//table
	*/

	int a = 5;
	const int*ptr = &a;//tova move
	//const int* ptr = 5;//tova ne moje
	const char* trala = "Tralal";//da
	//const int*trp = { 1,2,3 };//ne
	//int*trp = { 1,2,3 };//ne
	int b[5] = { 1,2,3,4,5 };
	//int*arr = &b;//ne
	int*arr = b;
	//std::cout << *(b+3) << std::endl;//4
	//std::cout << arr[4] << std::endl;//5
	//std::cout << &arr[4] << std::endl;//adress 4-element
	//std::cout << *&arr[4] << std::endl;
	//std::cout << &*&arr[4] << std::endl;//adress 4
	//std::cout << &arr << std::endl;//adresa na pointers
	//std::cout << &b << std::endl;//adress  0
	//std::cout << &arr[0] << std::endl;//adress  0
	/*
	for (int i = 0; i < 5; i++)
	{
		std::cout <<i<<":"<< &(arr[i]) << std::endl;//all adresses
	}
	*/

	//zadacha 1
	/*
	char brand_model[50];
	char* watch=brand_model;
	for (size_t i = 0; i < 5; i++)
	{
	std::cin.getline(watch,100);
	std::cout << brand_model << ": " << std::boolalpha << is_chronograph(watch)<<std::endl;
	}
	//std::cout << brand_model << ": " << std::boolalpha << is_chronograph(brand_model) << std::endl;
	*/

	//zadacha 2

	












	
	return 0;
}
