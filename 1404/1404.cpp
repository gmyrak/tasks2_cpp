#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;


int main()
{    
	ifstream inp("input.txt");
	ofstream out("output.txt");

	int N;
	// Чтение длины массива
	inp >> N;
	int *nums = new int[N];

	for (int i = 0; i < N; i++) {
		int n;
		inp >> n;
		nums[i] = n;
	}

	int count = 0;

	for (int i = 1; i < N; i++) {
		if (nums[i] > nums[i - 1]) count++;		
	}

	out << count;

	inp.close();
	out.close();

	return 0;
}