#include <iostream>

using namespace std;
int main()
{
	double len_wall;
	double qty_frame;
	double len_frame_all;
	double len_frame[20];
	double point[20];
	double balance;
	double qty_frame_plus;
	double gap;
	double sigma_frame;

	cout << "Enter the length of the wall: ";
	cin >> len_wall;

	cout << "How many frames do you have? ";
	cin >> qty_frame;

	len_frame[0] = 0;
	for (int i=1; i <= qty_frame; i++)
	{
		cout << "What is the length of Frame-" << i << "? ";
		cin >> len_frame[i];
		len_frame_all = len_frame[i] + len_frame_all;
	}

	balance = len_wall - len_frame_all;
	qty_frame_plus = qty_frame + 1;
	gap = balance/qty_frame_plus;
	len_frame_all = 0;

	for (int i=1; i <= qty_frame; i++)
	{
		for (int j=0; j < i; j++)
		{
			len_frame_all = len_frame[j] + len_frame_all;
		}
		point[i] = ((len_frame[i])/2) + i*gap + len_frame_all;
		cout << point[i] << endl;
		len_frame_all = 0;
	}

	return 0;
}