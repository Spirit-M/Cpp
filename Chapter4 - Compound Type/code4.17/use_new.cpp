// use_new.cpp -- using the new operator
#include <iostream>
int main()
{
	using namespace std;
	int nights = 1001;
	int * pt = new int;						// allocate space for an int
	*pt = 1001;								// store a value there

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;
	double * pd = new double;				// allocate space for a double
	*pd = 10000001.0;						// store a double there

	cout << "double ";
	cout << "value = " << *pd << ": loaction = " << pd << endl;
	cout << "loation of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;
	cin.get();
	return 0;
}