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
	m = 0;
	cout << "Введите имя файла: ";
	getline(cin, Filename);
	F.open(Filename);
	getline(F, S, '\0');
	F.close();
	for (i = 4; i < S.size(); i++) {
		if ((S[i - 4] == ' ') & (S[i - 3] == ' ') & (S[i - 2] == ' ') & (S[i - 1] == ' ') & (S[i] == ' ')) {
			m++;
		};
	};
	cout << "Количество абзацев: " << m;
}