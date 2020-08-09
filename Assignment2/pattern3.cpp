
#include<iostream>

using namespace std;
int main()
{
int n;
cout << "enter number of rows and Column of arrow\n";
cin >> n  ;

{
	int midrow = n / 2 ;

	int secondblock = midrow + 2;
	int secondlastblock = midrow + 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (i == 1) {
				if ( j == midrow - 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow - 1)
				{
					cout << "*";
				}
				if ( j == midrow - 2)
				{
					cout << "*";
				}


			}
			if (j == midrow )
			{
				cout << "*";
			}
			else {
				cout << " ";
			}

			if (i == 1)
			{

				if ( j == midrow + 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow + 1)
				{
					cout << "*";
				}
				if ( j == midrow + 2)
				{
					cout << "*";
				}


			}

		}
		cout << "\n";
	}


}
}
