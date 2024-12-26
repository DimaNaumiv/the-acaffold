#include "hero.h"
#include<fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <chrono>

using namespace std;

void out(int Times, string win_los,string name) {
	system("cls");
	cout << name << " you are " << win_los << endl;
	cout << "you spended " << Times << " times" << endl;
};
void fout(string all) {
	string filename = "heros.txt";
	fstream fs;
	fs.open(filename, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open()) {
		cout << "file didnt open\n";
	}
	else {
		fs << all;
	}
}

Hero::Hero() { cout << "input your name pls\n"; cin >> name; system("cls");};
void Hero::inall(int Times, string win_los){
	out(Times,win_los,name);
	string all = "name: " + name + "  times: " + to_string(Times) + "  type of end: "+win_los+"\n";
	fout(all);
};