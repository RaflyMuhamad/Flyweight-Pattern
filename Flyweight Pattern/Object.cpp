#include "Object.h"

void Object::setTipe(string tipe)
{
	this->tipe = tipe;
	if (tipe == "circle")
	{
		size[0].tipe = "jari-jari";
		size[1].tipe = "jari-jari";
	}
	else if (tipe == "rectangle")
	{
		size[0].tipe = "panjang";
		size[1].tipe = "lebar";
	}
	else if (tipe == "triangle")
	{
		size[0].tipe = "alas";
		size[1].tipe = "tinggi";
	}
}

string Object::getTipe()
{
	return tipe;
}

void Object::make()
{
	cout << "Make [ "
		<< tipe << ", "
		<< size[0].tipe << " = " << size[0].size
		<<", "
		<< size[1].tipe << " = " << size[1].size
		<< " - at Coordinate " << coord
		<< " ]";
	if (this->getStatus())
	{
		cout << " is Enabled";
	}
	else
	{
		cout << " is Disabled";
	}
	cout << endl;
}

void Object::use()
{
	 status = true;
}

void Object::setSize(int x, int y)
{
	size[0].size = x;
	size[0].size = y;
}

void Object::setStatus(bool y)
{
	status = y;
}

bool Object::getStatus()
{
	return status;
}

void Object::setCoord(int x)
{
	coord = x;
}

int Object::getCoord()
{
	return coord;
}

