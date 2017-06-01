#include "stack.h"
#include <iostream>
#include <direct.h>
#include <string>
#include <sstream>

using namespace std;

Tstack<string>& split(const string &s, char delim, Tstack<string> &elems) {
	stringstream ss(s);
	string item;
	while (getline(ss, item, delim)) {
		elems.add(item);
	}
	return elems;
}


Tstack<string>& split(const string &s, char delim) {
	Tstack<string> elems(15);
	return split(s, delim, elems);
}


int main()
{
	try
	{
		setlocale(NULL, "RUSSIAN");
    	Tstack <string> temp;

		char current_work_dir[FILENAME_MAX];
		_getcwd(current_work_dir, sizeof(current_work_dir));
	
		temp = split(current_work_dir, '\\');

		for (;;)
			cout << temp.get() << endl;



	}
	catch (int e)
	{}

	cin.get();
	return 0;
}