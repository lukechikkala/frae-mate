#include <iostream>

using namespace std;

int main()
{
	double len_wall; //Length if the wall
	double qty_frame;
	double len_frame_all;
	double len_frame[20];		//change this
	double point[20];			//change this
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

/*
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
	cout << "Wall: " << len_wall << endl;
	cout << "All Frames: " << len_frame_all << endl;
	cout << "Balance: " << balance << endl;
	cout << "Frame + 1: " << qty_frame_plus << endl;
	cout << "Gap: " << gap << endl;

	cout << "\nLength of Wall: " << len_wall << endl;
	cout << "You have " << qty_frame << " frames." <<endl;
	for (int i=0; i < qty_frame; i++)
	{
		cout << len_frame[i] << endl;
	}
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
*/
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

/*
X	len_wall			= Length of the Wall.
-------------------------------------------------------------
Y	qty_frame			= No. of Frames.
-------------------------------------------------------------
∑Zf len_frame_all		= Z1 + Z2 + ... + Zf
 Z1	len_frame_1			= Length of Frame-1
 Z2	len_frame_2			= Length of Frame-2
 Z3	len_frame_3			= Length of Frame-3
 Z4	len_frame_4			= Length of Frame-4
 .
 .
 Zf	len_frame_f			= Length of Frame-f
-------------------------------------------------------------
A	balance				= X - ∑Zf
-------------------------------------------------------------
B	qty_frame_plus		= Y + 1
-------------------------------------------------------------
C	gap					= A/B
-------------------------------------------------------------

---------------------------------
|					  n-1		|
|	Pn = (Zn/2) + nC + ∑ Zf		|
|					  f=0		|
---------------------------------

For
	X = 1000
	Y = 2
	Z = 100 // Same length for both the Frames.
	Point-1 = 317	Edge-1 = 267
	Point-2 = 684	Edge-2 = 634
*/












