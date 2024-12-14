#include <string>
#include <vector>
#ifndef TTFCWord_H
#define TTFCWord_H
class Fword {
private:
	int vin=1;
	std::string word="empty";
	std::string your_word;

	std::vector<char> Corect;
	std::vector<char> Uncorect;

public:
	Fword(std::string word) :word(word) { Corect.reserve(10); Uncorect.reserve(10); };

	void tru_find();

	void show_uncorect();
	void show_corect();

	int vin_check();
};
#endif