#include "Car.h"
#include <string.h>
#include <iostream>
using namespace std;

Car::Car()
{
	this->model = nullptr;
	this->color = nullptr;
	this->year = 0;
	this->price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	this->year = y;
	this->price = pr;
}

Car::~Car()
{
	delete[]this->model;
	delete[]this->color;
	cout << "Destruct\n";
}

void Car::Input()
{
	char buff[20];
	cout << "Enter model -> ";
	cin >> buff;
	if (model != nullptr) {
		delete[] model;
	}
	model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);

	char buff_c[20];
	cout << "Enter color -> ";
	cin >> buff_c;
	if (color != nullptr) {
		delete[] color;
	}
	color = new char[strlen(buff_c) + 1];
	strcpy_s(color, strlen(buff_c) + 1, buff_c);

	cout << "Enter year -> ";
	cin >> year;
	cout << "Enter price -> ";
	cin >> price;
}

void Car::Output()
{
	cout << "Model: " << this->model << endl;
	cout << "Color: " << this->color << endl;
	cout << "Year: " << this->year << endl;
	cout << "Price: " << this->price << endl;
}

char* Car::GetModel()
{
	return this->model;
}

char* Car::GetColor()
{
	return this->color;
}

int Car::GetYear()
{
	return 0;
}

double Car::GetPrice()
{
	return 0.0;
}

void Car::SetModel(const char* m)
{
	const char* model = m;
}

void Car::SetColor(const char* c)
{
	const char* color = c;
}

void Car::SetYear(int y)
{
	this->year = y;
}

void Car::SetPrice(int pr)
{
	this->price = pr;
}
