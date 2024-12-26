#include "wwf.h"
#include <fstream>
#include <string>
#include <random>
#include <iostream>
#include <vector>

using namespace std;

string word(int a) {

	vector <string> words;
	string filename = "words.txt";
	fstream file;
	string line;

	file.open(filename, fstream::in);

	if (file.is_open()) {
		while (getline(file, line)) {
			words.push_back(line);
		}
	}
	else {
		cout << "file isnt opend\n";
	}
	file.close();
	return words[a];
}

int random_number() {
	random_device x;
	return x() % 3;
}

Wword::Wword() {
	a = word(random_number());
}
string Wword::ostr() { return a; };
