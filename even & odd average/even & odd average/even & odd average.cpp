/*

 Write a C++ program that takes from user 5 numbers and calculate their average then print if
 average is even or odd .

*/
#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3, num4, num5, average;
    cout << "ENTER ANY 5 NUMBERS YOU WANT :\n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    average = (num1 + num2 + num3 + num4 + num5) / 5;
    cout << "______________\n" << endl;
    cout << "Average = " << average << endl;

    if (average % 2 == 0)
    {
        cout << "Average is even number \n";
    }
    else
    {
        cout << "Average is odd number \n";

    }


    return 0;
}