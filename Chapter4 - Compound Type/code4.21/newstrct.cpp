// newstrct.cpp -- using new with a structure
#include <iostream>
struct inflatable						// structure definition
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable * p = new inflatable;	// allot memory for structure
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);				// method 1 for member access
}