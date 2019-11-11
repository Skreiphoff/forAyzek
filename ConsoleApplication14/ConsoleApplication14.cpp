#include "pch.h"
#include <iostream>
#include <string> 
#include <Windows.h>
using namespace std;


class product {
public:
	string name;
	double price = 0;
	int amount = 0;


	product(string _name, double _price, int _amount)
	{
		name = _name;
		price = _price;
		amount = _amount;
	}

	product() {

	}


	void Input() {

		cout << "Введите наименование товара: ";
		cin >> name;
		cout << "Введите цену товара: ";
		cin >> amount;
		cout << "Введите количество товара: ";
		cin >> amount;
	}
	void Show() {
		cout << name << endl << price << endl << amount << endl;
	}
protected:
	double src = 0;
};

void avgPrice(product value[]);

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string name;
	double price;
	int amount;

	int const N = 1;

	product value[N];

	for (int i = 0; i < N; i++)
	{
		value[i].Input();
	}

	avgPrice(value);

	/*for (int i = 0; i < N; i++)
	{
		value[i].Show();
	}*/
	system("pause");
	return 0;
};

void avgPrice(product value[])
{

}