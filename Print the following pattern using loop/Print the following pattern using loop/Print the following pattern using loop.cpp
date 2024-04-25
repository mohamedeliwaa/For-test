/*


Print the following pattern using loop:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


*/

#include <iostream>
using namespace std;
int main()
{
	int rows = 5;
	for (int i = rows; i >= 1; --i)
	{
		for (int x = 1; x <= i; x++)
		{
			cout << x << " ";
		}

		cout << endl;
	}


	return 0;
}

