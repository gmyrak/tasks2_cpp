// 1409: Циклический сдвиг вправо

#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inp("input.txt");
	ofstream out("output.txt");

	int N;
	inp >> N;
	int *nums = new int[N];

	int n;
	for (int i = 0; i < N; i++) {		
		inp >> n;
		nums[i] = n;
	}

	// N - количество элементов массива
	// N-1 индекс последнего элемента
	
	int last = nums[N - 1]; // запоминаем последний
	for (int i = N-1; i > 0; i--) { // от конца к началу
		nums[i] = nums[i - 1]; // каждый равен предыдущему
	}
	nums[0] = last; // последний становится первым

	for (int i = 0; i < N - 1; i++) { // исключем последнее число из цикла (i < N-1)
		out << nums[i] << " ";
	}
	out << nums[N - 1]; // последнее число выводим отдельно чтобы не было лишнего пробела в конце


	inp.close();
	out.close();

	return 0;
}