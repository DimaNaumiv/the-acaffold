#include "wwf.h"
#include <map>
#include <string>
#include <random>

using namespace std;

string word(int a) {
	map<int, string> words;

	words[0] = "dog";
	words[1] = "cat";
	words[2] = "school";

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
