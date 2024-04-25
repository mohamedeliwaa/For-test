/*

 Read from user N number and print if it divisible by 3 or not.

*/
#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "ENTER ANY NUMBER YOU WANT :\n";
    cin >> num;
    if (num % 3 == 0)
    {
        cout << "yes is divisible by 3\n";
    }
    else
    {
        cout << "no isn’t divisible by 3\n";
    }


    return 0;
}








