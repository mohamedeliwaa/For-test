// : Write a program that gives the sum of squares of numbers from 10 to 20 using while loop.

#include <iostream>
using namespace std;
int main()
{
	int num = 10;
	int total_sum = 0;
	while (num <= 20)
	{
		total_sum += num * num;
		num++;
	}

	cout << "Sum of squares of number from 10 to 20 :  " << total_sum << endl;
	return 0;
}
