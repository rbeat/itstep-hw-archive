#include <iostream>
using namespace std;

char ans;
int number = 100;

void main(){
	setlocale(LLC_ALL, "rus");
	cout << "\a(c)2014 R.Beat\nДобро пожаловать в программу АКИНАТОР!\nДанная программа сможет угадать задуманое вами число.\nЧисло должно быть в пределах от 1 до 100.\nВЫ ГОТОВЫ?(1-Y/2-N)";
	cin >> ans;
	switch(ans){
	case 1:
		guess();
	case 2:
		cout << "Ну ладно, приходи ещё.";

	case else:
		cout << "ERROR!";
		break;
	}
}

void guess(){
	ans = 0;
	number = number / 2;
	cout << "Итак, ваше число больше " << number << "?\n1-Да, 2-Нет, 3-Это моё число. \n";
	cin >> ans;
	if(ans == 1){
		number = number + (number/2);
		continue;
	}else
	if(ans == 2){
		continue;
	}else
		if(ans == 3){
			cout << "\a\a\aУраа! Я смог угадать ваше число!\nДо новых встреч, друг мой!";
			break;
		}else
			cout << "ERROR!";
		break;

}