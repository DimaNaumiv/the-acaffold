#include <string>
#include <iostream>
#include <chrono>
#ifndef HERO_H
#define HERO_H
class Hero {
private:
	std::string name;
public:
	Hero();
	void inall(int Times,std::string win_los);
};
#endif