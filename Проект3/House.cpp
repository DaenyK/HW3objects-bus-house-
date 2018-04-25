#include "House.h"

House::House()
{
	address = "";
	houseNumber = 0;
	floor = 0;
	roomNumber = 0;
	area = 0.0;
}

House ::House(string address, int houseNumber, int floor, int roomNumber, double area)
{
	this->address = address;
	this->houseNumber = houseNumber;
	this->floor = floor;
	this->roomNumber = roomNumber;
	this->area = area;
}

House::House(const House & obj)
{
	this->address = obj.address;
	this->houseNumber = obj.houseNumber;
	this->floor = obj.floor;
	this->roomNumber = obj.roomNumber;
	this->area = obj.area;
}

void  operator >> (istream & in, House &h)
{
	getline(in, h.address,'\\');
	in >> h.houseNumber >> h.floor >> h.roomNumber>>h.area;
}