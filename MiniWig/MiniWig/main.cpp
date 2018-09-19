#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	int boolaid = 1;
	int col = 0;

	while (boolaid > 0) {
		col++;
		system("cls");

		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, col);
		//boolaid--;
		if (col == 255) {
			col = 1;
		}
		Beep(523, 5); // 523 hertz (C5) for 5 milliseconds



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