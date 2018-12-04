// 1607: Среднее арифметическое

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
	int **arr; 
	arr = new int*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[M];
	}
		
	// Заполнение значениями из файла
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			inp >> arr[i][j];			
		}		
	}	

	int sum = 0;
	int cnt = 0;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			sum += arr[i][j];
			cnt++;
		}
	}
	
	float res = (float)sum / cnt;
	
	char buf[30];
	sprintf_s(buf, "%f", res);	
	out << buf;

	out.close();
	inp.close();	

	return 0;
}