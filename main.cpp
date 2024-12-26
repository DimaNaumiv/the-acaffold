#include <iostream>
#include <string>
#include <fstream>
#include "wwf.h"
#include "ttfcsow.h"
#include "picture.h"
#include "chrono"
#include "hero.h"
using namespace std;

    Wword what_word;
	Fword find_word(what_word.ostr());
	Picture screan;
	Hero hero;

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
			
				//double a = chrono::system_clock::to_time_t(time);
				auto time = (chrono::high_resolution_clock::now() - start) / 1000000000;

				string filename = "heros.txt";
				fstream fs;
				fs.open(filename, fstream::in | fstream::out | fstream::app);
				fs <<"seconds: "<< time << "econds\n\n";

				hero.inall(j, "win");
				cout << "you spend time for finding: " << time<< "econds";

				return "you won\n";
			}
			else if (find_word.vin_check() != 3 and i >= 13) {
				auto time = (chrono::high_resolution_clock::now() - start) / 1000000000;

				string filename = "heros.txt";
				fstream fs;
				fs.open(filename, fstream::in | fstream::out | fstream::app);
				fs << "seconds: " << time << "econds\n\n";

				hero.inall(j, "lose");
				cout << "you spend time for finding: " << time << "econds";
				return "you lose\n";
			}
			system("pause");
			system("cls");
		}
}

int main() {
	all();
	return 0;
}