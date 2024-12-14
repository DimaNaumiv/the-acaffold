#ifndef PICTURE_H
#define PICTURE_H
class Picture {
private:
	int counter=0;
	char scean[9][8];
public:
	Picture();
	void outpi();
	void incount(int i);
};
#endif