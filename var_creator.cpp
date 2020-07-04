/*
Author: Luke Chikkala
Source: https://stackoverflow.com/questions/27400788/c-iteration-to-create-variables

The following code creates variables.
*/

#include <iostream>
#include <array>
#include <utility>

using namespace std;

int main()
{
	int b;

	cout << "Enter b: " << endl;
	cin >> b;

	const_case<int&>(b) = b

	array<int, b> a;
	for (int x = 0; x <= a.size(); x++)
	{
		a[x] = x + x;
	}

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;
	cout << a[5] << endl;

	return 0;
}

// static_cast<T const>(variable)