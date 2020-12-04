#include <iostream>
using namespace std;
void main(){
int mas[3][3];
for(int i=0; i<3; i++){
	for(int j=0; j<4; j++){
	mas[i][j] = rand()%10;
	}
	cout << mas[i][1] << " ";
	cout << mas[i][2] << " ";
	cout << mas[i][3] << " ";
	cout << "\n";
	}

cout << "Now, new one: \n\n";

for(int i=0; i<3; i++){
	for(int j=0; j<4; j++){
	if(i=0, j=1){
		continue;
	}
	if(i=1, j=0){
		continue;
	}
	if(i=1, j=2){
		continue;
	}
	if(i=2, j=1){
		continue;
	}
	mas[i][j] = 0;
	}
	cout << mas[i][1] << " ";
	cout << mas[i][2] << " ";
	cout << mas[i][3] << " ";
	cout << "\n";
	}

system("pause");
}