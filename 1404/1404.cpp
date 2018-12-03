#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

const int N = 100;

int main()
{
    cout << "Hello World 1404 ++!\n"; 

	ifstream inp("input.txt");
	ofstream out("output.txt");

	int M[N];
	while (!inp.eof())
	{
		int n;
		inp >> n;
		cout << n << endl;
	}


	int s;
	inp >> s;

	out << s;


	inp.close();
	out.close();

	return 0;
}

