#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "rus");
	int numbers[10];
	for (int i = 0; i < 10; i++){
		numbers[i] = rand() % 10;
		cout << i + 1 << ". " << numbers[i] << "\n";
	}

	int max = numbers[0];
	for (int i = 0; i < 10; i++){
		if (max < numbers[i]){
			max = numbers[i];
		}
	};
	cout << "\n\nMax: " << max << ". Thanks :3 \n\nR.Beat \n\n";
	system("pause");


}