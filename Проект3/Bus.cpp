#include "Bus.h"

bus::bus()
{
	name = "";
	busNumber = "";
	marshrut = 0;
	model = "";
	year = 0;
	mileage = 0;
}

bus::bus(string name, string busNumber, int marshrut, string model, int year, int mileage)
{
	this->name = name;
	this->busNumber = busNumber;
	this->marshrut = marshrut;
	this->model = model;
	this->year = year;
	this->mileage = mileage;
}

bus::bus(const bus & obj)
{
	this->name = obj.name;
	this->busNumber = obj.busNumber;
	this->marshrut = obj.marshrut;
	this->model = obj.model;
	this->year = obj.year;
	this->mileage = obj.mileage;
}
void  operator >> (istream & in, bus &b)
{
	getline(in, b.name,'\\');
	getline(in, b.busNumber, '\\');

	in >> b.marshrut >>b.model>> b.year >> b.mileage;
}


