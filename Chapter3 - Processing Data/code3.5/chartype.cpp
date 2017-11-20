// chartype.cpp -- the char type
#include <iostream>
int main()
{
	using namespace std;
	char ch;						// declate a char variable

	cout << "Enter a character: " << endl;
	cin >> ch;
	cin.get();
	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;
	cin.get();
	return 0;
}