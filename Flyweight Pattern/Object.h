#pragma once
#include <iostream>

using namespace std;

struct Size {
	string tipe;
	int size = 0;
};

class Object {
private:
	string tipe;
	Size size[2];
	int coord = 0;
	bool status = false;
public:
	void setTipe(string tipe);
	string getTipe();

	void make();
	void setSize(int x, int y);
	Size* getSize();

	void setCoord(int x);
	int  getCoord();

	void use();
	void setStatus(bool y);
	bool getStatus();
};
