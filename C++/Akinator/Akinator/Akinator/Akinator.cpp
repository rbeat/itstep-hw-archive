#include <iostream>
using namespace std;

char ans;
int number = 100;

void main(){
	setlocale(LLC_ALL, "rus");
	cout << "\a(c)2014 R.Beat\n����� ���������� � ��������� ��������!\n������ ��������� ������ ������� ��������� ���� �����.\n����� ������ ���� � �������� �� 1 �� 100.\n�� ������?(1-Y/2-N)";
	cin >> ans;
	switch(ans){
	case 1:
		guess();
	case 2:
		cout << "�� �����, ������� ���.";

	case else:
		cout << "ERROR!";
		break;
	}
}

void guess(){
	ans = 0;
	number = number / 2;
	cout << "����, ���� ����� ������ " << number << "?\n1-��, 2-���, 3-��� �� �����. \n";
	cin >> ans;
	if(ans == 1){
		number = number + (number/2);
		continue;
	}else
	if(ans == 2){
		continue;
	}else
		if(ans == 3){
			cout << "\a\a\a����! � ���� ������� ���� �����!\n�� ����� ������, ���� ���!";
			break;
		}else
			cout << "ERROR!";
		break;

}