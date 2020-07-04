#include <iostream>

using namespace std;

int main()
{
	int a[256], b;

	cout << "Enter b: ";
	cin >> b;

	for (int x = 0; x <= b; x++)
	{
		a[x] = x + x;
		cout << a[x] << endl;
	}

	return 0;
}