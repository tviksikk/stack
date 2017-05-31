#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
	try
	{
    	Tstack <int> temp(10);
	
		temp.add(123);
		temp.add(155);
		temp.add(121);
		temp.add(0);
		cout << temp.get() << " ";
		cout << temp.get() << " ";
		cout << temp.get() << " ";
		cout << temp.get();
		temp.resize(2);
	}
	catch (int e)
	{}

	cin.get();
	return 0;
}