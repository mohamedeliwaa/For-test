
/*

  Rewrite the following for loop into a while loop

int s = 0;
for (int i = 1; i <= 10; i++) {
s = s + i;
cout<<s<<endl;
}

*/


#include <iostream>
using namespace std;
int main()
{
	int s = 0;
	int i = 1;
	while (i <= 10)
	{
		s = s + i;
		cout << s << endl;
		i++;
	}

	return 0;
}
