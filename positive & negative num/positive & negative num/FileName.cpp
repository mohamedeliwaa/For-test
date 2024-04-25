/*
 Given a positive number, write a C++ program that checks the negative or positive,
 print the number and its type in a message.
*/
#include <iostream>
using namespace std;
int main()
{


    double num;
    cout << "ENTER ANY NUMBER YOU WANT :\n";
    cin >> num;

    if (num > 0)
    {
        cout << "this number is positive\n";
    }
    else if (num < 0)
    {
        cout << "this number is negative\n";
    }
    else
    {
        cout << "this number isn't positive & negative\n";

    }

    return 0;
}









