// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	char opr;
	cout << "Привет!\n Я научю тебя пользоваться этим калькулятором.\n a - первое число.\n b - второе.\n Операция - то, что ты хочешь сделать с ними.\n - - минус.\n + - Плюс\n / - поделить/n * - умножить/n <=> - сравнить числа./n % - остаток от диления./n Удачи!/n Made by R.Beat/n (c) 2014";
	cout << "a - ?";
	cin >> a;
	cout << "b - ?";
	cin >> b;
	cout << "Операция - ?";
	cin >> opr;

	if (opr == '+'){
		cout << "Ответ: " << a + b;
	}
	else
	if (opr == '-'){
		cout << "Ответ: " << a - b;
	}
	else
	if (opr == '*'){
		cout << "Ответ: " << a*b;
	}
	else
	if (opr == '/'){
		cout << "Ответ: " << a / b;
	}
	else
	if (opr == '%'){
		cout << "Ответ: " << a%b;
	}
	else
	if (opr == '<=>'){
		if (a > b){
			cout << "Ответ: a больше b";
		}
		else
		if (a < b){
			cout << "Ответ: a меньше b";
		}
		else
		if (a == b){
			cout << "Ответ: a и b - одинаковые";
		}
		else
			cout << "Неверная операция!!!";

		
	}
	system("pause");
}

