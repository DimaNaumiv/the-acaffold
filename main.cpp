#include <iostream>
#include <string>
#include "wwf.h"
#include "ttfcsow.h"
#include "picture.h"
using namespace std;

    Wword what_word;
	Fword find_word(what_word.ostr());
	Picture screan;

	string all() {
		int i = 0;

		while (true) {
			screan.outpi();
			find_word.tru_find();
			if (find_word.vin_check() == 0) { screan.incount(i); i++; }
			find_word.show_corect();
			find_word.show_uncorect();

			if (find_word.vin_check() == 3 and i < 13) {
				system("cls");
				return "you won\n";
			}
			else if (find_word.vin_check() != 3 and i >= 13) {
				system("cls");
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