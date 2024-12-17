#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include "ttfcsow.h"

using namespace std;

char out_chars(char a) { return a; }
char chars_with_vector(const char a, vector <char> Corect) {
	vector <char>::iterator it = Corect.begin();
	while (it != Corect.end()) {
		if (*it == a) {
			return a;
		}
		it++;
	}
	return '_';
};
bool chars_with_string(const char a, string word) {
	string::iterator it = word.begin();
	while (it != word.end()) {
		if (*it == a) {
			return 1;
		}
		it++;
	}
	return 0;
};

void Fword::tru_find() {
	if (vin == 3) {
		vin = 3;
		cout << vin << endl;
	}
	else {

		string my_simbole_or_word;
		cout << "input simbol or word\n";
		cin >> my_simbole_or_word;

	    char simbol = my_simbole_or_word[0];

		if (size(my_simbole_or_word) == 1) {
			if (chars_with_string(simbol, word) == 1) {
				Corect.push_back(simbol);
				vin = 1;
			}
			else {
				Uncorect.push_back(simbol);
				vin = 0;
			}
		}
		else {

			if (my_simbole_or_word == word) {
				cout << "you won\n";
				vin = 3;
			}
			else {
				vin = 0;
			}
		}
	}
}
void Fword::show_uncorect() {
	if (!Uncorect.empty()){
		
		cout << "Uncorect symbols:\n";

		vector<char>::iterator it = unique(Uncorect.begin(),Uncorect.end());
		Uncorect.resize(distance(Uncorect.begin(), it));
		it = Uncorect.begin();
		while (it != Uncorect.end()) {
			cout << *it << " ";
			it++;
		}
		cout << endl;
}
	else {
		cout << "you have none un corect sybols\n";
	}
	your_word.clear();
};
void Fword::show_corect() {
	if (!Corect.empty()) {
		cout << "Your word:\n";
		for (int i = 0; i < size(word); i++) {
			cout << chars_with_vector(word[i], Corect) << " ";
			your_word.push_back(chars_with_vector(word[i], Corect));
		}
		cout << endl;
	}
	else {
		cout << "your word:\n";
		for (int i = 0; i < size(word); i++) {
			cout << "_ ";
		}
		cout << endl;
	}
	if (your_word == word) {
		vin = 3;
	}
}

int Fword::vin_check() { return vin; }