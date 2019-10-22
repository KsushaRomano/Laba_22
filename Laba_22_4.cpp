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
	int i, m;
	string S, Filename;
	fstream F;
	cout << "Введите имя файла: ";
	getline(cin, Filename);
	F.open(Filename);
	getline(F, S, '\0');
	F.close();
	m = S.size();
	for (i = 1; i < S.size(); i++) {
		if ((S[i - 1] == ' ') & (S[i] == ' ')) {
			S.erase(i, 1);
			i--;
		};
	};
	F.open(Filename, ios::out);
	F << S;
	F.close();
}