#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	int boolaid = 1;
	int col = 0;
	int zero = 500;
	int one = 600;
	int two = 700;
	int three = 800;
	int four = 900;
	int five = 1000;
	int six = 1100;

	while (boolaid > 0) {
		col++;
		

		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, col);
		//boolaid--;
		if (col == 255) {
			col = 1;
		}
		Beep(zero, 500); 
		Beep(three, 500);
		Beep(five, 600);
		Beep(zero, 500);
		Beep(three, 500);
		Beep(six, 400);
		Beep(five, 400);
		Beep(zero, 500);
		Beep(three, 500);
		Beep(five, 500);
		Beep(six, 600);
		Beep(five, 600);
		system("cls");


		cout << "    __  ___   _             _    _       __   _         " << endl
			<< "   /  |/  /  (_)  ____     (_)  | |     / /  (_)  ____ _" << endl
			<< "  / /|_/ /  / /  / __ \   / /   | | /| / /  / /  / __ `/" << endl
			<< " / /  / /  / /  / / / /  / /    | |/ |/ /  / /  / /_/ / " << endl
			<< "/_/  /_/  /_/  /_/ /_/  /_/     |__/|__/  /_/   \__, /  " << endl
			<< "                                               /____/   " << endl;

		

	}

	system("pause");
	return 0;
}