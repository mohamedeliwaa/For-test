#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int x, num, score = 0;
string username;
int userage;
void game()
{
    for (int i = 0; i <= 100; i++)
    {
        x = 20 + rand() % (30 - 20 + 1);
        cout << "ENTER NUMBER BETWEEN 20 & 30 : ";
        cin >> num;

        if (num > 30 || num < 20)         // if 
        {
            cout << "Error , please enter number between 20 & 30 .\n" << endl;

            cout << "************************* \n" << endl;
        }

        else                              // else
        {


            if (num == x)
            {

                cout << "CORRECT, You Are Amazing .\n";


                for (int i = 0; i <= score; i++)
                {
                    score += 1;
                    cout << " -----------\n";
                    cout << "|" << " SCORE : " << score << " |" << endl;
                    cout << " -----------\n" << endl;
                    break;
                }


                cout << "************************* \n" << endl;

            }
            else
            {
                cout << "INCORRECT, TRY AGAIN .\n" << endl;
                cout << "************************* \n" << endl;

            }


        }

    }
}
int  main()
{
    cout << "                                                      -# GUESS WHICH NUMBER THE COMPUTER CHOOSES #- \n" << endl;
    cout << "    * PLEASE ENTER YOUR NAME : ";
    cin >> username;
    cout << "\n    ---------------------------- \n" << endl;
    cout << "    * PLEASE ENTER YOUR AGE  : ";
    cin >> userage;
    cout << "\n";


    if (userage >= 12)
    {
        cout << "----------------------------------------------------------------------------------------\n";
        cout << "                       | Now you're ready to play, .......  |\n";
        cout << "                        ------------------------------------   " << endl;
        cout << "                                 |  Come On Baby .  |          " << endl;
        cout << "                                  ------------------           " << endl;
        game();
    }
    else
    {
        cout << " SORRY, YOUR AGE IS NOT ALLOWED. \n" << endl;
    }

    return 0;
}

/*


   



   


*/