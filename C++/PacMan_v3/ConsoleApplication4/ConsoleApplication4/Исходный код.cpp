#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "rus");
	cout << "������� �����: ";
	for (int i = 2; i <= 1000; i++){
		bool flag = true;
		for (int j = 2; j < i; j++){
			if ((i%j) == 0){
				flag = false;
				break;
			}
			if (flag){
				cout << i << "\a, ";
				break;
			}
		}


	}
	cout << "�������� �������: \n";
	int a = 1;
	int b = 1;
	cout << "\n������� ������: ";
	cin >> a;
	cout << "\n������� ������: ";
	cin >> b;
	for (int i = 1; i <= a; i++){
		if (i == 1 || i == a){
			for (int j = 1; j <= b; j++){
				cout << "*";
			}
		else{
			for (int j = 1; j <= b; j++){
				if (j == 1 || j == b){
					cout << "*";
				}
				else
					cout << " ";
				}
			}
			cout << "\n;"
		
		}
	}
	system("pause");
}
