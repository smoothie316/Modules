#define CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main() {
	string label[MAX_SIZE];
	int count = 0;

	ifstream in("coco.txt");

	while (!in.eof()) {
		string str;
		getline(in, str);
		label[count] = str;
		count++;
	}

	string inputStr;
	cin >> inputStr;

	for (int i = 0; i < count; i++) {
		if (label[i].find(inputStr) == 0) {
			cout << label[i] << endl;
		}
	}
}