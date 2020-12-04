#include <iostream>
#include <conio.h>
#include <time.h>
#include <cctype>
#include <cstdlib>
#include <Windows.h>
#include <fstream>
#include <ctime>
using namespace std;
char Board [9];

void showBoard ( );
bool moveIsValid (int m );
int winner(); 
int main() {
setlocale(LC_ALL, "rus");

srand (time (NULL) );
string nick1;
string nick2;
int Whose_Turn = 1; 
int Move; 
int Total_Moves = 0;
int num_players = 0;

for(int i=0; i<9; i++){
	Board[i] = 'i';
}

cout << "�����: http://www.cplusplus.com/Forum/ \n������������ ���: TananTanTananTanToink\n����������� � ����������: R.Beat.\n� ������, �� ������� ����, ���� ��, �������, ������ ��������� ���� ���������\n";
cout << "     )   (                                         )          \n";
cout << "  ( /(   )\ )           (      *   )            ( /(          \n";
cout << "  )\()) (()/(   (       )\   ` )  /(      (     )\())     (   \n";
cout << "|((_)\   /(_))  )\    (((_)   ( )(_))     )\  |((_)\      )\  \n";
cout << "|_ ((_) (_))   ((_)   )\___  (_(_())   _ ((_) |_ ((_)  _ ((_) \n";
cout << "| |/ /  | _ \  | __| ((/ __| |_   _|  | | | | | |/ /  | | | | \n";
cout << "  ' <   |  _/  | _|   | (__    | |    | |_| |   ' <   | |_| | \n";
cout << " _|\)\  |_|)   |___| ( \___|   |_|     \)__ |  _|\_\   \___ | \n";
cout << "                                           \ \             \ \\n";
cout << " ( /(   ( /(         )\ )            ( /(                     \n";
cout << " )\())  )\())     ( (()/(      (     )\())     (              \n";
cout << "((_)\  ((_)\      )\ /(_))     )\  |((_)\      )\             \n";
cout << " _((_)   ((_)    ((_|_))    _ ((_) |_ ((_)  _ ((_)            \n";
cout << "| || |  / _ \   _ |  _ _|  | | | | | |/ /  | | | |            \n";
cout << "| __ | | (_) | | || | | |  | |_| |   ' <   | |_| |            \n";
cout << "|_||_|  \___/   \__/  ___|  \___ |  _|\_\   \___ |            \n";
cout << "                                \ \             \ \           \n";
cout << "\n";
cout << "\n";

cout << "����� ���������� � ���� :��������-������:\n��� ��������� ���� - ������� ����� 1\n��� ��������� ���� - ������� ����� 2\n" << endl;
cin >> num_players;
  if (num_players == 2) {
    cout << " *����� 1 - ������� ��� ���:* " << endl;
    cin >> nick1;
    cout << " *����� 2 - ������� ��� ���:* " << endl;
    cin >> nick2;
  }
  if (num_players == 1) {
  //Get PLayer Names
    cout << " *����� - ������� ��� ���:* " << endl;
    cin >> nick1;
    while (winner() == 0 && Total_Moves < 9) {
      do {
        
        showBoard ();
        
        if (Whose_Turn == 1) {
          cout << nick1 << ": ��� ���!" << endl;
          cout << "\n������� ����� ��������, �� �������, �� ������ ��������� ���� ���." << endl;
          cin >> Move;
        } else {
          Move = rand() % 9;
          cout << "��� ����������: " << Move << endl;
        }
       
      } while (moveIsValid (Move) != true);
      Total_Moves++;
      switch (Whose_Turn) {
        case (1): {
          Board[Move] = 'x';
          Whose_Turn = 2;
          break;
        }
        case (2): {
          Board[Move] = 'o';
          Whose_Turn = 1;
        }
      }
    }
    showBoard ();
    if (winner () == 1) {
      showBoard();
      cout << nick1 << ", �� �������! �����������!" << endl;
    } 
    if (winner () == 2) {
      // Show the board
      showBoard();
      cout << " ��������� �������! " << endl;
    } 
    if (Total_Moves==9 && !winner()) {
      // Show the board
      showBoard();
      cout << "�����!" << endl;
    }
  }
  system ("Pause");
  return 0;
}
void showBoard ( ) {
  cout << endl;
  cout << Board[0] << " | " << Board[1] << " | " << Board[2] << endl;
  cout << "--+---+--" << endl;
  cout << Board[3] << " | " << Board[4] << " | " << Board[5] << endl;
  cout << "--+---+--" << endl;
  cout << Board[6] << " | " << Board[7] << " | " << Board[8] << endl;
  cout << endl;
}

bool moveIsValid (int m ) {
  if (Board[m] != 'x' && Board[m] != 'o') {
    return true;
  } else {
    return false;
  }
}

int winner ( ) {
if (Board[0] == Board[1] && Board[1] == Board[2]) {
  if (Board[0] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[3] == Board[4] && Board[4] == Board[5]) {
  if (Board[3] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[6] == Board[7] && Board[7] == Board[8]) {
  if (Board[6] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[0] == Board[3] && Board[3] == Board[6]) {
  if (Board[0] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[1] == Board[4] && Board[4] == Board[7]) {
  if (Board[1] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[2] == Board[5] && Board[5] == Board[8]) {
  if (Board[2] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[0] == Board[4] && Board[4] == Board[8]) {
  if (Board[0] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
if (Board[2] == Board[4] && Board[4] == Board[6]) {
  if (Board[2] == 'x') {
    return 1;
  } else {
    return 2;
  }
}
return 0;
} 