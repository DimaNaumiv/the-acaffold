#include "picture.h"
#include <iostream>
using namespace std;

void out_crean(char scean[9][8]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			cout << scean[i][j]<<" ";
		}
		cout << endl;
	}
}

Picture::Picture() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			scean[i][j]=' ';
		}
	}
};
void Picture::incount(int i) {counter=i; };

void Picture::outpi() {
	if (counter == 0) {
		for (int i = 1; i < 9; i++) {
			scean[i][1] = '|';
			scean[i][7] = '|';
		}
		for (int i = 2; i < 7; i++) {
			scean[0][i] = '_';
			scean[8][i] = '_';
		}
	}
	else if (counter == 1) {
		for (int i = 2; i < 6; i++) {
			scean[7][i] = '_';
		}
	}
	else if (counter == 2) {
		for (int i = 2; i < 8; i++) {
			scean[i][2]='|';
		}
	}
	else if (counter == 3) {
		for (int i = 3; i < 5; i++) {
			scean[1][i]='_';
		}
	}
	else if (counter == 4) {
		scean[2][5] = '|';
	}
	else if (counter == 5) {
		scean[3][5] = 'O';
	}
	else if (counter == 6) {
		scean[4][5] = '|';
	}
	else if (counter == 7) {
		scean[4][4] = '/';
	}
	else if (counter == 8) {
		scean[4][6] = '\\';
	}
	else if (counter == 9) {
		scean[5][5] = '|';
	}
	else if (counter == 10) {
		scean[6][4] = '/';
	}
	else if (counter == 11) {
		scean[6][6] = '\\';
	}
	out_crean(scean);
	cout << endl;
}