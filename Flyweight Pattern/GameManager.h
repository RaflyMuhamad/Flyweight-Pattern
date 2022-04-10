#pragma once
#include "Fac.h"

class GameManager
{
private:
	string tipe[3] = { "circle","rectangle", "triangle" };
	Object array[9];
	Factory fac;
public:
	void generateObject();
	void printArray();
	void printVectorsize();

	string randomTipe(int index);
	void useObject();
};