#include <iostream>
using namespace std;

int main(){
	int number;
	int dk[7];
	int temp;
	
	cout << "Translation numbers from one number system to other...\n\nEnter your number: \n";
	cin >> number;
	for(int i = 6; i>-1; i--){
		dk[i] = number %2;
		number = number/2;
	}
	cout << "\n\aNow, new one:\n";
	for(int i = 0; i<7; i++){
		cout << dk[i];
	}
	cout << "\n(C)R.Beat 2014\n\n";
	system("pause");
	
}
