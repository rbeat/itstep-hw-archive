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
	cout << "\a\nИтак, какую операцию Вы хотите совершить:\n" << endl;
	cout << "\t1. Создать свой дневник." << endl;
	cout << "\t2. Прочитать уже существующий дневник." << endl;
	cout << "\t3. Выход из программы.\n" << endl;
	cout << "Ваш выбор: ";
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
	cout << "Введите имя и расширение файла: ";
	cin >> nameoffile;
	cout << "\nСоздание файла...";
	output.open("C:\\Diary\\" + nameoffile, ios::app);
	cout << "[OK]";
	cout << "Вы можете вводить информацию о себе: " << endl;
	cin >> plot;
	output << plot;
	cout << "Файл создан успешно!" << endl;
	cout << "Вы хотите продолжить работу?\n" << endl;
	cout << "\t1. Да" << endl;
	cout << "\t2. Нет\n" << endl;
	cout << "Ваш выбор: ";
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
	cout << "Введите название и расширение файла: ";
	cin >> nameoffile1;
	input.open("C:\\Diary\\" + nameoffile1, ios::app);
	cout << "\nОткрытие файла...";
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
		cout << "\nТакого файла не существует.";
		read();
	}
}