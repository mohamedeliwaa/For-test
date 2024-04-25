// On February 24, 2024, I started doing the program and finished at the same time.
// The program asks you to enter some data that concerns you .
/* 

At the beginning of this program, 
the user is asked if he wants to enter his data. If he agrees,
the program moves him to fill in his data, and after filling it out,
the program ends. If the user refuses to enter his data from the beginning,
he is moved to confirm that he did not fill in the data. If he agrees, the program ends,
and if he wants, he goes directly to the data filling list.

*/
#include <iostream>
using namespace std;
char  c, A;
string name;
int age; 

void f_if()  // This function if the user agrees to enter the data.
{
	cout << "DO YOU AGREE TO FILL OUT YOUR INFORMATION [Y | N] ?\n";
	cin >> c;

	if (c == 'Y' || c == 'y') //The user is required to enter (Y/N) to begin entering his data.
	{
		cout << " ------------ FILL YOUR DATA ------------\n\n\n";
		cout << "- PLEASE ENTER YOUR NAME :\n"; // Enter the user name here.
		cin >> name;
		cout << "Hello ," << name << " in my world .\n\n\n";


		cout << "- PLEASE ENTER YOUR AGE :\n"; // Enter the user's age here.
		cin >> age;
		cout << " Age : " << age << " Years .\n\n";



		float distance; // Here, enter the distance between home and work.
		cout << "-  WHAT IS THE DISTANCE BETWEEN YOUR HOME AND WORK ?\n ";
		cout << "-  note : Enter the distance in kilometers.\n ";
		cin >> distance;
		cout << "Distance is : " << distance << " Km .\n";
		cout << "\n------------ Thank you for using ------------";
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
	}
}
void f_if2() // This if function is used if the user does not agree to enter the data.
{

	if (c == 'N' || c == 'n') 
	{
		cout << "\n Are you sure you have not filled out your data ? [ Y | N ] \n";
		cin >> A; // The user must enter (Y/N) to stop entering his data.
		if (A == 'Y' || A == 'y')

		{
			cout << " ------------ Thank you ------------\n\n\n\n\n ";

		}

		else if (A == 'N' || A == 'n')
		{
			f_if();
		}

	}
	
 }
int main()
{	
	f_if();
	f_if2();
	return 0;
}
//The compiler starts reading the program from the main function unless I want otherwise.







