#include<iostream>

using namespace std;
int main()
{
int n;
cout << "enter number of rows and Column of oval \n";
cin >> n  ;


int mr = n / 2;
	mr = n- mr;
	int m = n/ 2;
	int frow  = n - m - m/ 2 - 1;//to find 1st block in 1st row where we should start priting the patter gt
	int lrow = frow + m - 1;
	int fcolumn = n- mr -mr / 2 ;//to find the 1st block colum wise to print * gt
	int lcolumn = fcolumn + mr - 1;
	int btw1 = frow - 1;
	int btw2 = lrow + 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == n - 1)
			{
				if (j >= frow && j <= lrow)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 1 || i == n- 2)
			{
				if ( j == btw2 || j == btw1)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else {
				if (i >= fcolumn && i <= lcolumn)
				{
					if (j == 0 || j == n - 1)
					{
						cout << "
						*";
					} else {
						cout << " ";
					}
				}
			}

		}
		cout << "\n";
	}

}













