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
	string S, Filename;
	fstream F;
	cout << "Введите имя файла: ";
	getline(cin, Filename);
	cout << "Введите количество строк и столбцов: ";
	cin >> N >> K;
	F.open(Filename, ios::out);
	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++) {
			F << '*';
		};
		F << endl;
	};
	F.close();
}