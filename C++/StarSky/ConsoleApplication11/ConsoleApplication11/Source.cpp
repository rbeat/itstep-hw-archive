#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

ifstream input;
ofstream output;

void create();
void read();
void main();

void main(){
	setlocale(LC_ALL, "rus");
	char ans = 0;
	system("color 0a");
	system("cls");
	cout << "Welcome!" << endl;
	cout << "\a\n����, ����� �������� �� ������ ���������:\n" << endl;
	cout << "\t1. ������� ���� �������." << endl;
	cout << "\t2. ��������� ��� ������������ �������." << endl;
	cout << "\t3. ����� �� ���������.\n" << endl;
	cout << "��� �����: ";
	cin >> ans;
	switch (ans){
	case 1:
		create();

	case 2:
		read();

	case 3:
		break;
	}
}

void create(){
	char countinue;
	int plot;
	int nameoffile;
	cout << "������� ��� � ���������� �����: ";
	cin >> nameoffile;
	cout << "\n�������� �����...";
	output.open("C:\\Diary\\" + nameoffile, ios::app);
	cout << "[OK]";
	cout << "�� ������ ������� ���������� � ����: " << endl;
	cin >> plot;
	output << plot;
	cout << "���� ������ �������!" << endl;
	cout << "�� ������ ���������� ������?\n" << endl;
	cout << "\t1. ��" << endl;
	cout << "\t2. ���\n" << endl;
	cout << "��� �����: ";
	cin >> countinue;
	switch (countinue){
	case 1:
		main();
	case 2:
		break;
	}
}

void read(){
	int nameoffile1;
	cout << "������� �������� � ���������� �����: ";
	cin >> nameoffile1;
	input.open("C:\\Diary\\" + nameoffile1, ios::app);
	cout << "\n�������� �����...";
	if (input.is_open()){
		cout << "[OK]" << endl;
		while (!input.eof()){
			char buffer[50];
			input.getline(buffer, 50);
			for (int i = 0; buffer[i] != NULL; i++){
				cout << buffer[i];
			}
			cout << "\n";
		}
		input.close();
		system("pause");
	}
	else{
		cout << "[FAIL]\a" << endl;
		cout << "\n������ ����� �� ����������.";
		read();
	}
}