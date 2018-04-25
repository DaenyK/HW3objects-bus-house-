#include "House.h"
#include "Bus.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	short nz, answer;
	do
	{
		cout << "введите номер задания: 1 - house; 2 - ; 0 - выход\n";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			House hi[10];
			short count, test = 0;
			ifstream  inFile("in.txt");
			cout << "street\t\thouse\tfloor\trooms\tarea\n";
			for (int i = 0; i < 10; i++)
			{
				inFile >> hi[i];
				hi[i].printInfo();
			}
			cout << "\n\n1.введите кол-во комнат для того, чтобы увидеть список квартир," << endl
				<< "имеющих заданное число комнат: ";
			cin >> count;

			for (int i = 0; i < 10; i++)
			{
				if (hi[i].getroomNumber() == count)
				{
					hi[i].printInfo();
					test++;
				}
			}
			if (test == 0)
				cout << "информации о таких квартирах нет\n";

			short from, to;
			test = 0;
			cout << "\n\n2.введите значения промежутка для этажей, \nfrom: ";
			cin >> from;
			cout << "to: "; cin >> to;
			cout << "введите кол-во комнат: ";
			cin >> count;

			for (int i = 0; i < 10; i++)
			{
				if (hi[i].getFloor() >= from && hi[i].getFloor() <= to
					&& hi[i].getroomNumber() == count)
				{
					hi[i].printInfo();
					test++;
				}
			}
			if (test == 0)
				cout << "информации о таких квартирах нет\n";

			double area;
			test = 0;
			cout << "\n\n3.введите значение для площади для того, чтобы увидеть" << endl
				<< "список квартир, имеющих площадь, превосходящую заданную: ";
			cin >> area;

			for (int i = 0; i < 10; i++)
			{
				if (hi[i].getArea() > area)
				{
					hi[i].printInfo();
					test++;
				}
			}
			if (test == 0)
				cout << "информации о таких квартирах нет\n";
			else cout << "\n\n";

			inFile.close();
		}break;

		case 2:
		{

			bus bi[10];
			short m, test = 0;
			ifstream  inBus("bus.txt");
			cout << "name\t\tbusNumber   marshrut\tmodel\tyear\tmileage\n";
			for (int i = 0; i < 10; i++)
			{
				inBus >> bi[i];
				bi[i].printInfo();
			}
			cout << "\n\n1. введите номер маршрута, чтобы увидеть список \nавтобусов для заданного номера маршрута:";
			cin >> m;
			for (int i = 0; i < 10; i++)
			{
				if (bi[i].getMarshrut() == m)
				{
					bi[i].printInfo();
					test++;
				}
			}
			if (test == 0)
				cout << "информации о таких автобусах нет\n";

			test = 0;
			cout << "\n\n2.список автобусов, которые эксплуатируются больше 10 лет\n";
			for (int i = 0; i < 10; i++)
			{
				if (bi[i].getYear() < 2009)
				{
					bi[i].printInfo();
					test++;
				}
			}
			if (test == 0)
				cout << "информации о таких автобусах нет\n";

			test = 0;
			cout << "\n\n2.список автобусов, пробег у которых больше 10000 км\n";
			for (int i = 0; i < 10; i++)
			{
				if (bi[i].getMileage() > 10000)
				{
					bi[i].printInfo();
					test++;
				}
			}
			if (test == 0)
				cout << "информации о таких автобусах нет\n";
			else cout << "\n\n";
		}break;
		case 0:
		{
			exit(1);
		}break;
		}
		cout << "хотите продолжить?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);
	system("pause");
}