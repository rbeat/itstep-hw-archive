#include <iostream>
using namespace std;

int main(){
	int mas[3][3];
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			mas[i][j] = rand() % 10;
			cout << mas[i][j] << " ";
	}
	cout << "\n";
	}
	int temp;
	for(int i=0;i<3;i++){
		for(int j=0; j<3; j++){
			temp = mas[i][j];
			if(temp == mas[i+1][j]||temp == mas[i][j+1]){
				i = i +1;
				j = j + 1;
				continue;
			}else
			continue; //или break
		}
	}
	cout << "This number most repeat: " << temp << "\a\n\n";
	
	system("pause");
}
