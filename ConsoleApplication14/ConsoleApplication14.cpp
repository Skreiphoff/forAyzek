#include "pch.h"
#include <iostream>
#include <string> 
#include <Windows.h>
#include <fstream>
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
		cin >> price;
		cout << "Введите количество товара: ";
		cin >> amount;
	}
	void Show() {
		cout << name << endl << price << endl << amount << endl;
	}
protected:
	double src = 0;
};

void avgPrice(product value[], int N);
void writeInFile(product value[], double temp1, double temp2, int N);

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


	avgPrice(value, N);

	system("pause");
	return 0;
};

void avgPrice(product value[], int N)
{
	double temp1 = 0;
	for (int i = 0; i < N; i++) {
		
		temp1 = value[i].price / value[i].amount;
		cout << endl << value[i].name << " имеет цену за единицу " << temp1 << endl;
	}

	double temp2 = 0;

	for (int i = 0; i < N; i++)
	{
		double temp = 0, temp1 = 0;
		temp += value[i].price;
		temp1 += value[i].amount;
		temp2 = temp / temp1;
	}

	writeInFile(value, temp1, temp2, N);
	cout << "Общяя сумма СВЦ = " << temp2 << "\n";

}

void writeInFile(product value[], double temp1, double temp2, int N) {
	ofstream out("Text.txt", ios::app);
	if (out.is_open())
	{
		for (int i = 0; i < N; i++) {
			out << "Товар: " << value[i].name << endl << "Цена: " << value[i].price << endl << "Количество: " << value[i].amount << endl << "Имеет цену за единицу: " << temp1 << endl << "Общяя сумма СВЦ: " << temp2 << endl << "========================" << endl;
		}
	}

	out.close();
}