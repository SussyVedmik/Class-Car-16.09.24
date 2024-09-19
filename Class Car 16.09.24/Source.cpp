#include "Car.h"
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	Car car1("Toyota", "Black", 2000, 5000);
	car1.Output();
	Car car2("Audi", "White", 2013, 7500);
	car2.Output();
	Car car3("_","_", 0, 0.0);
	car3.Input();
	car3.Output();
	Car car4("_", "_", 0, 0.0);
	car4.Input();
	car4.Output();
}