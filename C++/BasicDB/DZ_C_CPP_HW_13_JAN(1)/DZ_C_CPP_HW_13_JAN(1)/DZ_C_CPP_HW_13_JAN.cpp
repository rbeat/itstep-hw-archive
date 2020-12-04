#include<iostream>
#include <fstream>
using namespace std;


ifstream read;
ofstream write;
bool flag = false;
int identification = 0;




void ANA(int id, char *name, char *surname, char *phone)
{
	write.open("D:\\Database.txt", ios::app);
	write << "ID: " << id << endl;
	write << "Name: " << name << endl;
	write << "Surname: " << surname << endl;
	write << "Phone: " << phone << endl;
	write << "---------------------------" << endl;
	write.close();
    identification ++;
}

void SC()
{
	read.open("D:\\Database.txt");
	while (!read.eof())
	{
		char buffer[50];
		read.getline(buffer, 50);
		for (int i = 0; buffer != NULL; i++)
		{
			cout << buffer[i];
		}
		cout << endl;
	}
	read.close();
	system("pause");
}



void SID()
{
	write.open("D:\\Database.txt", ios::app);
	write << identification;
	write.close();
}

void GID()
{
	SID();
	read.open("D:\\Database.txt", ios::_Nocreate);
	char buff[50];
	while (!read.eof())
	{
		read.getline(buff, 50);
	}
	identification = (int)(buff[1]);
	read.close();
}

void M()
{
	int choice = 0;
	char Name[50];
	char Surname[50];
	char Phone[50];

	cout << "1. Add new abonent"
		<< endl << "2. Show all abonents"
		<< endl << "3. Exit" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Name: ";
		cin >> Name;
		cout << endl << "Surname: ";
		cin >> Surname;
		cout << endl << "Phone: ";
		cin >> Phone;

		ANA(identification, Name, Surname, Phone);
		break;
	case 2:
		SC();
		break;
	case 3:
		SID();
		flag = true;
		system("exit");
		break;
	default:
		cout << "Error";
		break;

	}
}



void main()
{
	GID();
	while (!flag)
	{
		system("cls");
		M();
	}
}