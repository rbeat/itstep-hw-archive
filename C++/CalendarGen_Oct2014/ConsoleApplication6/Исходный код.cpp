#include <iostream>

using namespace std;
void main(){
	setlocale(LC_ALL, "rus");
	

	cout << "October, 2014  Ukrainian Calendar  \n";
	cout << "Îêòÿáðü, 2014. Óêðàèíñêèé êàëåíäàðü  \n\n";

	int A = 3, i, j;
	cout << " MO  TU  WE  TH  FR  ST  SN \n";
	cout << " ÏÍ  ÂÒ  ÑÐ  ×Ò  ÏÒ  ÑÁ  ÂÑ \n";
	for (i = 1, j = 1; i < 32; i++){
		if (i == 1 && j < A){
			cout << "    ";
			i--;
		}
		else{
			cout << " ";
			if (i < 10)
				cout << " ";
			cout << i << " ";
		}

		if (++j > 7){
			j = 1;
			cout << "\n\n";
		}
	}
	cout << "\n\n";
	cout << "R.Beat\n\n";
	system("pause");
}