#include "Fac.h"

Object* Factory::getObject(string tipe)
{
	Object* returnObject = new Object;

	struct object_has_type
	{
		object_has_type(string const& n) : tipe(n) {}
			bool operator () (Object& p) { return p.getTipe() == tipe; }
	private:
		string tipe;
	};

	vector<Object>::iterator it = find_if(listOf.begin(), listOf.end(), object_has_type(tipe));

	if (it != listOf.end())
	{
		*returnObject = *it;
	}
	else
	{
		Object* temp;
		temp = new Object();
		temp->setTipe(tipe);
		listOf.push_back(*temp);
			returnObject = temp;
	}
	return returnObject;
}