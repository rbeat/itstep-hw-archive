#include <iostream>
#include <math.h>
using namespace std;

void main(){
	int temp;
	int ans;
	int *eq = &ans;
	char oper;
	int a, b;
	system("color 0A");
	cout << "\aWelcome to the Geek Calc! \nWhat do you want to do?\n\nHINT\n+ is plus,\n - is minus,\n * is multiply,\n / is divide,\n c is compare,\n d is Random digit,\n n is Random Number.\n\n";
	cin >> oper;
	cout << "\n\nThen enter 1st number:\n";
	cin >> a;
	cout << "\nEnter 2nd number:\n";
	cin >> b;

	if (oper == '+'){
		*eq = a + b;
		cout << "The answer is: " << *eq << "\nMemory block with answer: " << eq << "\nThank You, come back when you need. :3";

	}
	else
		if (oper == '-'){
			*eq = a - b;
			cout << "The answer is: " << *eq << "\nMemory block with answer: " << eq << "\nThank You, come back when you need. :3";
		}
		else
			if (oper == '*'){
				*eq = a * b;
				cout << "The answer is: " << *eq << "\nMemory block with answer: " << eq << "\nThank You, come back when you need. :3";
			}
			else
				if (oper == '/'){
					*eq = a / b;
					cout << "The answer is: " << *eq << "\nMemory block with answer: " << eq << "\nThank You, come back when you need. :3";
				}
				else
					if (oper == 'c'){
						if (a>b){
							cout << "a>b\nThank You, come back when you need. :3";
						}
						else
							if (a<b){
								cout << "a<b\nThank You, come back when you need. :3";
							}
							else
								if (a == b){
									cout << "a=b\nThank You, come back when you need. :3";
								}
					}
					else
						if (oper == 'd'){
							*eq = rand() % 10;
							cout << "The digit is: " << *eq << "\nMemory block with answer: " << eq << "\nThank You, come back when you need. :3";

						}
						else
							if (oper == 'n'){
								*eq = rand() % 1000000000;
								cout << "The number is: " << *eq << "\nMemory block with answer: " << eq << "\nThank You, come back when you need. :3";

							}
							else{
								cout << "\aYou enter wrong operation!\nTry again.\nTermanating program....\n\n\n";
							}
							cout << "(c)2014 R.Beat.\n\n\n\n\n\nChrismas is coming! ;)\n\a";

							system("pause");

}