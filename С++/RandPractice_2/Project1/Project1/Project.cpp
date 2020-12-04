#include <iostream>
using namespace std;
void main(){
	int a[5];
	for(int i=0; i<5; i++){
		a[i] = rand() % 5;
        cout << i + 1 << ". " << a[i] << "\n";
	}
	int sum;
	for(int i=0; i<5; i++){
		sum=sum+a[i];
	}
	cout << "The SUM is: " + sum;
};
system("pause");
