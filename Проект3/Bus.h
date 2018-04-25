#ifndef _BUS_H_
#define _BUS_H_
#include "Headers.h"

class bus
{
private:
	string name;
	string busNumber;
	int marshrut;
	string model;
	int year;
	int mileage;

public:
	bus();
	bus(string name, string busNumber, int marshrut, string model, int year, int mileage);
	bus(const bus & obj);
	virtual ~bus() {};

	string getName() { return name; }
	string getBusNumber() { return busNumber; }
	int getMarshrut() { return marshrut; }
	string getModel() { return model; }
	int getYear() { return year; }
	int getMileage() { return mileage; }

	friend void  operator >> (istream & in, bus &b);
	
	void printInfo()
	{
		cout << name << "\t" << busNumber << "\t"<<marshrut <<"\t"<<model<< "\t"<<year << "\t"<<mileage;
	}
};
#endif