#include "GameManager.h"

void GameManager::generateObject()
{
	srand(time(0));

	for (int i = 0; i < 9; i++)
	{
		array[i] = *fac.getObject(randomTipe(0 + rand() % 3));
		array[i].setCoord(i);
		array[i].setSize(rand(), rand());
	}
}

void GameManager::printArray()
{
	for (int i = 0; i < 9; i++)
	{
		array[i].make();
	}
	cout << endl;
}

void GameManager::useObject()
{
	int i;
	cout << "Input Coordinate : ";
	cin >> i;

	array[i].use();
	cout << endl;
	cout << "Object Typed " << array[i].getTipe() << " at " << i << " is used";
}

void GameManager::printVectorsize()
{
	cout << "Object created : ";
	for (auto i = fac.listOf.begin(); i != fac.listOf.end(); ++i)
	{
		cout << i->getTipe() << ", ";
	}
	cout << "Size of vector is " << fac.listOf.size() << endl;
}

string GameManager::randomTipe(int index)
{
	return tipe[index];
}