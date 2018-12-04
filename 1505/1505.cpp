// 1505: K-й пробел

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{

	ifstream inp("input.txt");
	ofstream out("output.txt");

	string line;
	string s;
	int k;

	getline(inp, line);
	s = line;

	getline(inp, line);
	k = stoi(line);

	int spos = 0; // позиция k-го пробела
	int scnt = 0; // количество пробелов

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' ) {
			scnt++;
			if (scnt == k) {
				spos = i + 1;
				break;
			}
		}
	}

	out << spos;

	inp.close();
	out.close();

	return 0;
}