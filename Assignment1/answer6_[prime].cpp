//6. Check whether a number is Prime.

#include <iostream>


using namespace std;

int main()
{
	int number;
	int counter = 2;
	int decider = 0;
	cout << "Please enter the number that you want to check:n";
	cin >> number;

	if (number < 0)
	{
		cout << "Please enter a positive integer";
		cin >> number;
	}
	else if (number == 0 || number == 1)
	{
		cout << number << " is neither a prime nor a composite number.n";
	}
	else
	{
		while (counter < number)
		{
			if (number % counter == 0)
			{
				cout << number << " is not a prime number.n";
				decider ++;
				break;
			}
			counter ++;
		}
		if (decider == 0)
		{
			cout << number << " is a prime number.n";
			cout << endl;
		}
     }
}
