using namespace std;

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i, j, m, N, K;
	string S, S0, Filename, Filename0;
	fstream F, F0;
	cout << "Введите имя первого файла: ";
	getline(cin, Filename);
	F.open(Filename);
	getline(F, S, '\0');
	F.close();
	cout << "Введите имя второго файла: ";
	getline(cin, Filename0);
	F0.open(Filename0);
	getline(F0, S0, '\0');
	F0.close();
	F.open(Filename, ios::out);
	F << S0 << S;
	F.close();
}