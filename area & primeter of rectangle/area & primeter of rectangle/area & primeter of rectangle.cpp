/*

 Write a C++ program that takes from user width and height of rectangle and
 calculates area and print it if width is divided by height else calculate perimeter and print it.

*/
#include <iostream>
using namespace std;
int main()
{

    int width, height, area, primeter;
    cout << "Please enter base of rectangle:" << endl;
    cin >> width;
    cout << "Please enter height of rectangle:" << endl;
    cin >> height;

    if (width % height == 0)
    {
        area = width * height;
        cout << "Area = " << area << endl;
    }
    else
    {
        primeter = (width * height) + 2;
        cout << "Primeter = " << primeter << endl;
    }

    cout << "-------------------------------- ";

    return 0;
}