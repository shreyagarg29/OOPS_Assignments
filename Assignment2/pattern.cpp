#include<iostream>
#include<cmath>
using namespace std;
void square(int size)
{
	for (int i = 1; i <= size; i++)
	{
		/* Iterate over each column */
		for (int j = 1; j <= size; j++)
		{
			if (i == 1 || i == size || j == 1 || j == size)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
void circle(int r, int c)
{
	int maxr = r / 2;
	maxr = r - maxr;
	int maxc = c / 2;
	int firstblock  = c - maxc - maxc / 2 - 1;//to find 1st block in 1st row where we should start priting the patter gt
	int lastblock = firstblock + maxc - 1;
	int firstleft = r - maxr - maxr / 2 ;//to find the 1st block colum wise to print * gt
	int lastleft = firstleft + maxr - 1;
	int block1 = firstblock - 1;
	int block2 = lastblock + 1;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1)
			{
				if (j >= firstblock && j <= lastblock)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 1 || i == r - 2)
			{
				if ( j == block2 || j == block1)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else {
				if (i >= firstleft && i <= lastleft)
				{
					if (j == 0 || j == c - 1)
					{
						cout << "*";
					} else {
						cout << " ";
					}
				}
			}

		}
		cout << endl;
	}
}
	void arrow(int size)
	{
		for (int i = 1; i <= 3 * size; i++)
		{
			for (int j = 1; j <= size + 2; j++)
			{

				if (i + j == size + 1)
					for (int k = 0; k < ((2 * i) - 1); k++)
					{
						cout << "*";
					}
				else
					if (i > size && j == size)
					{
						cout << "*";
					}
					else
					{
						cout <<" ";
					}
			}
			cout << endl;
		}
	}
	void diamond(int r, int c)
	{
		int midline = r / 2;
		int consti = r * 1.4;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (i == 0 || i == r - 1)
				{
					if (j == midline)
					{
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				else {

					if (j == midline - i || j == midline + i)
					{
						cout << "*";
					}
					else if (i - j == midline)
					{
						cout << "*";

					}
					else if (i + j == consti)
					{
						cout << "*";

					}
					else {
						cout << " ";

					}
				}
			}
			cout << endl;
		}
	}
	int main() {
		int n, r, c;
		cout << "Enter the number of rows for printing square : ";
		cin >> n;
		square(n);
		cout << "Enter the number of rows and columns for printing circle : ";
		cin >> r >> c;
		circle(r, c);
		cout << "Enter number of rows for printing arrow : ";
		cin >> n;
		arrow(n);
		int r1, c1;
		cout << "Enter the number of rows and columns for printing diamond : ";
		cin >> r1 >> c1;
		diamond(r1, c1);

		return 0;
	}