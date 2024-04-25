// Write a C++ program to print all the numbers divisible by 3 and 5 for agiven number.


#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number : ";
	cin >> num;
	cout << "Divisible numbers by 3 and 5 : " << endl;
	for (int i = 1; i <= num; ++i)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << i << endl;
		}
	}


	return 0;
}

