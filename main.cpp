#include <iostream>
#include <string>
#include "wwf.h"
#include "ttfcsow.h"
#include "picture.h"
#include "chrono"
using namespace std;

    Wword what_word;
	Fword find_word(what_word.ostr());
	Picture screan;

	string all() {
		int i = 1;
		int j = 0;
		auto start = chrono::high_resolution_clock::now();

		while (true) {
			j++;
			screan.outpi();
			find_word.show_corect();
			find_word.show_uncorect();
			find_word.tru_find();
			if (find_word.vin_check() == 0) { screan.incount(i); i++;}

			if (find_word.vin_check() == 3 and i < 13) {
				system("cls");
				cout << "you spend time for finding: " << (chrono::high_resolution_clock::now() - start)/1000000000<<"econds";
				cout << "\nyou do somethink " << j << " times\n";
				return "you won\n";
			}
			else if (find_word.vin_check() != 3 and i >= 13) {
				system("cls");
				cout << "you spend time for finding: " << (chrono::high_resolution_clock::now() - start) / 1000000000 << "econds";
				cout << "\nyou do somethink " << j << " times\n";
				return "you lose\n";
			}
			system("pause");
			system("cls");
		}
}

int main() {
	cout<<all();
	return 0;
}