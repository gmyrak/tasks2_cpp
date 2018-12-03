#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    cout << "Hello World 1404 ++!\n"; 

	ifstream inp("input.txt");
	ofstream out("output.txt");

	int N;
	inp >> N;
	int *nums = new int[N];

	for (int i = 0; i < N; i++) {
		int n;
		inp >> n;
		nums[i] = n;
	}





	for (int i = 0; i < N; i++) {
		cout << nums[i] << endl;
	}



	inp.close();
	out.close();

	return 0;
}

