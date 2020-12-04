#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <time.h>
#include <cctype>
#include <cstdlib>
#include <Windows.h>
using namespace std;

void main();
void Win();
char field[11][21];
int xPacman = 1;
int yPacman = 1;
int score = 0;
int flagWin = 0;
int labirint[11][21] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1 },
	{ 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1 },
	{ 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1 },
	{ 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1 },
	{ 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1 },
	{ 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
};
void ShowField(){
	for (int i = 0; i < 11; i++){
		for (int j = 0; j < 21; j++){
			cout << field[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "Score: " << score;
}
void Fill(){
	for (int i = 0; i < 11; i++){
		for (int j = 0; j < 21; j++){
			if (i>0 && i < 10 && j>0 && j < 20){
				field[i][j] = ' ';

			}
			if (labirint[i][j] == 1){
				field[i][j] = '#';
			}
		}
	}
	field[yPacman][xPacman] = '\x02';
}
void ChangePosition(int y, int x){
	if (y > 0 && y < 10 && x>0 && x < 20){
		if (field[y][x] != '#'){
			if (field[y][x] == 'o')
				score += 10;
			field[yPacman][xPacman] = ' ';
			yPacman = y;
			xPacman = x;
			field[y][x] = '\x02';
			Win();
			if (flagWin == 0){
				system("cls");
				cout << endl << "You win!!!";
				Sleep(1000);
				system("color 0c");
				Sleep(1000);
				system("color 0a");
				Sleep(1000);
				system("color 09");
				Sleep(1000);
				system("color 05");
				Sleep(1000);
				main();
			}
		}
	}
}
void keyPress(int keyCode){
	switch (keyCode){
	case 72: ChangePosition(yPacman - 1, xPacman);
		system("cls");
		showField();
		break;
	case 80: ChangePosition(yPacman + 1, xPacman);
		system("cls");
		ShowField();
		break;
	case 75: ChangePosition(yPacman, xPacman - 1);
		system("cls");
		showField();
		break;
	case 77: ChangePosition(yPacman, xPacman + 1);
		system("cls");
		ShowField();
		break;
	default: 
		break;
	}
}
void FoodForPacman(){
	int x, y;
	system("color 0e");
	for (int i = 0; i < 50; i++){
		y = rand() % 9 + 1;
		x = rand() % 19 + 1;
		if (field[y][x] == ' ')
			field[y][x] = 'o';
	}
}
void Win(){
	flagWin = 0;
	for (int i = 0; i < 11; i++){
		for (int j = 0; j < 21; j++){
			if (field[i][j] == 'o'){
				flagWin++;
			}
		}
	}
}
void main(){
	system("cls");
	srand(time(NULL));
	Fill();
	FoodForPacman;
	ShowField;
	while (true){
		getch();
		int key = getch();
		KeyPress(key);
	}
	system("pause");
}