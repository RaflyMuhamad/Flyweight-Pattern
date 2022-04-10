#include "Fac.h"
#include "GameManager.h"

int main()
{
	Factory factory;
	GameManager Gmanager;

	cout << "Generating Object_____" << endl;
	Gmanager.generateObject();

	cout << "Displaying Object______" << endl;
	Gmanager.printArray();
	Gmanager.printVectorsize();

	int opt = 0;
	while (opt != 66)
	{
		cout << endl;
		cout << "1. Use Object" << endl;
		cout << "2. Display All Object" << endl;
		cout << "3. List of object created " << endl;
		cout << "66. Exit" << endl;
		cout << "[] : "; cin >> opt;

		switch (opt)
		{
		case 1:
			Gmanager.useObject();
			break;
		case 2:
			Gmanager.printArray();
			break;
		case 3:
			Gmanager.printVectorsize();
			break;
		}
	}
}