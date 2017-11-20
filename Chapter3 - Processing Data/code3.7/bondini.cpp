// bondidni.cpp -- using escape sequence
#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHyper\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cin.get();
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	cin.get();
	return 0;
}