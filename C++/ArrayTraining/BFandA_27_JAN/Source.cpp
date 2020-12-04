#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;

void FreeMemory();
bool Create_2D_Array();
void Fill_2D_Array(int Max_Value);
void Show_2D_Array();
bool Save_2D_Array(string FileName);
int GetSize(string FileName);
bool Read_2D_Array(string FileName);
void Sort_ASC();
void Sort_DESK();
void MenuProgram();

int **Array_2D;
FILE *f;
int size;
bool ExitFlag = true;

void FreeMemory()
{
	if(size != NULL) {
		for (int i = 0; i < size; i++)
		{
			delete []*(Array_2D+i);
		}

		delete []Array_2D;
	}
}

bool Create_2D_Array()
{
	Array_2D = new int*[size];
	for (int i = 0; i < size; i++)
	{
		*(Array_2D+i) = new int[size];
	}
	return true;
}

void Fill_2D_Array(int Max_Value)
{
	if(Create_2D_Array()) {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				*(*(Array_2D + i) + j) = rand() % Max_Value;
			}
		}
	}
}

void Show_2D_Array()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j  < size; j ++)
		{
			cout << *(*(Array_2D + i) + j) << " " ;
		}
		cout << endl;
	}
}

bool Save_2D_Array(string FileName)
{
	f = fopen(FileName.c_str(), "wb");
	if (f != NULL) {
		fwrite(&size, sizeof(int), 1, f);
		int tmp;
		for (int i = 0; i < size; i++)
		{
			//fwrite((Array_2D + i), sizeof(int), size, f);
			for (int j = 0; j < size; j++)
			{
				tmp = *(*(Array_2D + i) + j);
				fwrite(&tmp, sizeof(int), 1, f);

			}
		}

		fclose(f);

		return true;
	}
	else
		return false;
}

int GetSize(string FileName)
{
	int tmp;
	f = fopen(FileName.c_str(), "rb+");
	if(f != NULL) {
		fread(&tmp, sizeof(int), 1, f);
		fclose(f);
		return tmp;
	}
	else
		return 0;
}

bool Read_2D_Array(string FileName)
{
	if (Array_2D != NULL)
		FreeMemory();

	size = GetSize(FileName);

	f = fopen(FileName.c_str(), "rb");
	if(f != NULL) {
		Create_2D_Array();
		fseek(f, 4, SEEK_SET);
		int tmp;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				fread(&tmp, sizeof(int), 1, f);
				*(*(Array_2D + i) + j) = tmp;
			}

		}

		fclose(f);
		return true;
	}
	else
	{
		return false;
	}


}

void Sort_ASC()
{
	if(Array_2D != NULL)
	{
		for(int k = 0; k < size*size; k ++)
			for(int i = 0; i < size; i ++)
				for(int j = 0; j < size - 1; j ++)
				{
					if(*(*(Array_2D + i) + j) > *(*(Array_2D + i) + j + 1))
					{
						int tmp = *(*(Array_2D + i) + j);
						*(*(Array_2D + i) + j) =*(*(Array_2D + i) + j + 1);
						*(*(Array_2D + i) + j + 1) = tmp;
					}
				}
	}
}

void Sort_DESK()
{
	if(Array_2D != NULL)
	{
		for(int k = 0; k < size*size; k ++)
			for(int i = 0; i < size; i ++)
				for(int j = 0; j < size - 1; j ++)
				{
					if(*(*(Array_2D + i) + j) < *(*(Array_2D + i) + j + 1))
					{
						int tmp = *(*(Array_2D + i) + j);
						*(*(Array_2D + i) + j) =*(*(Array_2D + i) + j + 1);
						*(*(Array_2D + i) + j + 1) = tmp;
					}
				}
	}
}

void MenuProgram()
{
	int c;
	int max;
	string fname;

	cout << "******MENU******" << endl
		<< "1. Generate an array;" << endl
		<< "2. Show an array;" << endl
		<< "3. Save to file;" << endl
		<< "4. Read from file;" << endl
		<< "5. Sort Ascending;" << endl
		<< "6. Sort Descending;" << endl
		<< "7. Exit." << endl;
	cin >> c;

	switch(c)
	{
	case 1: cout << "Enter the size of the 2D array: ";
		cin >> size;
		cout << "Enter the max value random number of the 2D array: ";
		cin >> max;
		Fill_2D_Array(max);
		cout << "2D array was created.";
		system("pause");
		break;

	case 2: 
		Show_2D_Array();
		system("pause");
		break;

	case 3: 
		cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
		cout << "Enter the file name: ";
		getline(cin, fname);
		Save_2D_Array(fname);
		cout << "File was saved" << endl;
		system("pause");
		break;

	case 4:
		cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
		cout << "Enter the file name: ";
		getline(cin, fname);
		if(Read_2D_Array(fname)) {
			cout << "Now you can see the result. Choose the 2 menu item. " << endl;
		}
		else
		{
			cout << "Error file name. Try again. " << endl;
		}
		system("pause");
		break;

	case 5:
		Sort_ASC();
		cout << "Now you can see the result. Choose the 2 menu item. " << endl;
		system("pause");
		break;

	case 6:
		Sort_DESK();
		cout << "Now you can see the result. Choose the 2 menu item. " << endl;
		system("pause");
		break;

	case 7:
		ExitFlag = false;
		if (Array_2D != NULL)
			FreeMemory();
		break;

	default: 
		cout << "Try again." << endl;
		system("pause");
		break;
	}
}

void main()
{
	srand(time(NULL));
	while (ExitFlag)
	{
		system("cls");
		MenuProgram();
	}
	system("pause");
}