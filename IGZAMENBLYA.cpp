// IGZAMENBLYA.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stroki.h"
#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
	setlocale(0, "");
	stroki std1;
	cout << "Введите вашу строку: " << endl;
	cin >> std1;
	stroki std2 = "Molodec!";
	cout << std2 << endl;
	std1.file_in();
	system("pause");
}

