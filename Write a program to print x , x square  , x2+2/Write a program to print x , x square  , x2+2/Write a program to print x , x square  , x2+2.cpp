#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int num = 5432;
	while (num > 0) {
		i++;
		num = num / 10;
	}
	cout << i;
	return 0;
}



//  Write the exact output for the following programs:

// 6  -
// output =>   4 
