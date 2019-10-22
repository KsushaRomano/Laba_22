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
	if (F) {
		while (!F.eof()) {
			getline(F, S, '\0');
			m = S.size();
			for (i = S.find(' ') + 1; i < m; i++) {
				F << S[i];
			};
		};
		F.close();
		F.open(Filename, ios::out);
		for (i = S.find(' ') + 1; i < m; i++) {
			F << S[i];
		};
		F.close();
	}
	else {
		cout << "Файл не существует";
	};
}