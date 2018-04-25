#include "House.h"
#include "Bus.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	short nz, answer;
	do
	{
		cout << "������� ����� �������: 1 - house; 2 - ; 0 - �����\n";
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
			cout << "\n\n1.������� ���-�� ������ ��� ����, ����� ������� ������ �������," << endl
				<< "������� �������� ����� ������: ";
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
				cout << "���������� � ����� ��������� ���\n";

			short from, to;
			test = 0;
			cout << "\n\n2.������� �������� ���������� ��� ������, \nfrom: ";
			cin >> from;
			cout << "to: "; cin >> to;
			cout << "������� ���-�� ������: ";
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
				cout << "���������� � ����� ��������� ���\n";

			double area;
			test = 0;
			cout << "\n\n3.������� �������� ��� ������� ��� ����, ����� �������" << endl
				<< "������ �������, ������� �������, ������������� ��������: ";
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
				cout << "���������� � ����� ��������� ���\n";
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
			cout << "\n\n1. ������� ����� ��������, ����� ������� ������ \n��������� ��� ��������� ������ ��������:";
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
				cout << "���������� � ����� ��������� ���\n";

			test = 0;
			cout << "\n\n2.������ ���������, ������� ��������������� ������ 10 ���\n";
			for (int i = 0; i < 10; i++)
			{
				if (bi[i].getYear() < 2009)
				{
					bi[i].printInfo();
					test++;
				}
			}
			if (test == 0)
				cout << "���������� � ����� ��������� ���\n";

			test = 0;
			cout << "\n\n2.������ ���������, ������ � ������� ������ 10000 ��\n";
			for (int i = 0; i < 10; i++)
			{
				if (bi[i].getMileage() > 10000)
				{
					bi[i].printInfo();
					test++;
				}
			}
			if (test == 0)
				cout << "���������� � ����� ��������� ���\n";
			else cout << "\n\n";
		}break;
		case 0:
		{
			exit(1);
		}break;
		}
		cout << "������ ����������?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);
	system("pause");
}