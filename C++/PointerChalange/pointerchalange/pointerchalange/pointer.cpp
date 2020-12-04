#include <iostream>
using namespace std;

void main(){
	//srand(time(NULL));
	int mas[10];
	for (int i = 0; i<10; i++){
		mas[i] = rand()%10;
		cout << i+1 << ". " << mas[i] << endl;
	}
	int *arr = &mas;
	int *max = &mas[0];
	int *min = &mas[0];
	for (int i = 0; i<10; i++){
		if(arr[i] > *max){
			*max = arr[i];
		}
	}
	for (int i = 0; i<10; i++){
		if(arr[i] < *min){
			*min = arr[i];
		}
	}
	cout << "max: " << max << endl;
	cout << "min: " << min << endl;
	system("pause");
}