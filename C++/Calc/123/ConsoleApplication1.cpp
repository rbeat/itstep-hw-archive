// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	char opr;
	cout << "������!\n � ����� ���� ������������ ���� �������������.\n a - ������ �����.\n b - ������.\n �������� - ��, ��� �� ������ ������� � ����.\n - - �����.\n + - ����\n / - ��������/n * - ��������/n <=> - �������� �����./n % - ������� �� �������./n �����!/n Made by R.Beat/n (c) 2014";
	cout << "a - ?";
	cin >> a;
	cout << "b - ?";
	cin >> b;
	cout << "�������� - ?";
	cin >> opr;

	if (opr == '+'){
		cout << "�����: " << a + b;
	}
	else
	if (opr == '-'){
		cout << "�����: " << a - b;
	}
	else
	if (opr == '*'){
		cout << "�����: " << a*b;
	}
	else
	if (opr == '/'){
		cout << "�����: " << a / b;
	}
	else
	if (opr == '%'){
		cout << "�����: " << a%b;
	}
	else
	if (opr == '<=>'){
		if (a > b){
			cout << "�����: a ������ b";
		}
		else
		if (a < b){
			cout << "�����: a ������ b";
		}
		else
		if (a == b){
			cout << "�����: a � b - ����������";
		}
		else
			cout << "�������� ��������!!!";

		
	}
	system("pause");
}

