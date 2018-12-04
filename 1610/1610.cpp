// 1610: Переворот

#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inp("input.txt");
	ofstream out("output.txt");

	int N;
	int M;
	inp >> N;
	inp >> M;

	// Инициализация двумерного динамического массива
	unsigned long **arr;
	arr = new unsigned long*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new unsigned long[M];
	}

	// Заполнение значениями из файла
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			inp >> arr[i][j];
		}
	}

	out << M << " " << N << endl;

	for (int j = 0; j < M; j++) {
		for (int i = N - 1; i > 0; i--) {
			out << arr[i][j] << " ";
		}
		out << arr[0][j] << endl; // Последнее число строки печатаем отдельно, чтобы избежать лишнего пробела
	}

	out.close();
	inp.close();

	return 0;
}