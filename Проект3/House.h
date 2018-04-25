#ifndef _HOUSE_H_
#define _HOUSE_H
#include "Headers.h"

class House
{
private:
	string address;
	int houseNumber;
	int floor;
	int roomNumber;
	double area;

public:
	House();
	House(string address, int houseNumber, int floor, int roomNumber, double area);
	House(const House & obj);
	virtual ~House() {};

	string getAddress() { return address; }
	int getHouseNumber() { return houseNumber; }
	int getFloor(){return floor;}
	int getroomNumber() { return roomNumber; }
	double getArea() { return area; }

	friend void  operator>> (istream & in, House & h); 

	void printInfo()
	{
		cout << address << "\t" << houseNumber << "\t" << floor << "\t" << roomNumber << "\t" << area;
	}
};

#endif