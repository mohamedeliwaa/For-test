#include <iostream>
using namespace std;















int main()
{
    string name;
    char letter;
    cout << "                                                                DISCRETE STRUCTURE  \n\n";
    cout << "Enter Your Name : ";
    cin >> name;
    cout << "Hello, " << name << " Welcome To The World Of Discrete Structure .\n\n ";


    cout << "* LOGICAL OPERATOR [ A ] \n";
    cout << " * GREATEST COMMON DIVISORS  GCD [ B ]  \n";
    cout << " * LEAST COMMON MULTIPLES  LCM [ C ] \n\n";



    int count;
    cout << "* Choose How Often You Want To Perform The Operation : ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {

       


        cout << "\n\nEnter Type The Letter Of The Operation You Want : ";
        cin >> letter;
        cout << "\n";

        switch (letter)
        {

        case 'A':

        {
            cout << "                    ----------------------------------------------------------------------------------------------------------------------------\n";
            cout << "                                                                LOGICAL OPERATOR  \n\n";
            cout << " * Choose Any Logical Operator You Want From Menu \n";
            cout << " --------------------- MENU -------------------" << endl;
            cout << " | " << " 1- Negation operator                       |" << "\n";
            cout << " | " << " 2- Conjunction operator                    |" << "\n";
            cout << " | " << " 3- Disjunction operator [ Inclusive OR ]   |" << " \n";
            cout << " | " << " 4- Disjunction operator [ Exclusive XOR ]  |" << " \n ";
            cout << "| " << " 5- Implication operator                    |" << " \n";
            cout << " | " << " 6- BI-Implication operator                 |" << " \n";
            cout << " | " << " 7- EXIT                                    |" << " \n";
            cout << " ----------------------------------------------\n" << endl;
            int n;
            cout << "* Choose How Often You Want To Perform The Operation : ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {

                cout << "* Choose Now From Menu : ";
                int num_choice;
                cin >> num_choice;

                switch (num_choice)
                {

                case 1:

                    int num1;
                    cout << endl << "\n--------------------------------------- " << endl;
                    cout << "\n##  Negation operator  ## " << endl;
                    cout << "    p : ";
                    cin >> num1;

                    if (num1 == 0)
                    {
                        cout << "not p : 1 ";
                    }
                    else if (num1 == 1)
                    {
                        cout << "not p : 0 ";
                    }
                    else
                    {
                        cout << " \nThis number is not allowed , please try again . \n";
                    }
                    cout << endl << "\n--------------------------------------- " << endl;

                    break;






                case 2:

                    int num2, num3;
                    cout << endl << "\n--------------------------------------- " << endl;
                    cout << "\n##  Conjunction operator  ## " << endl;
                    cout << "    p   : ";
                    cin >> num2;
                    cout << "    q   : ";
                    cin >> num3;

                    if (num2 == 1 && num3 == 1)
                    {
                        cout << "p and q : 1 ";
                    }
                    else if (num2 > 1 || num2 < 0 || num3 > 1 || num3 < 0)
                    {
                        cout << " \nThis number is not allowed , please try again . \n";

                    }
                    else
                    {
                        cout << "p and q : 0 ";
                    }
                    cout << endl << "\n--------------------------------------- " << endl;

                    break;








                case 3:
                    int num4, num5;
                    cout << endl << "\n--------------------------------------- " << endl;
                    cout << "\n##  Disjunction operator [ Inclusive OR ]  ## " << endl;
                    cout << "    p   : ";
                    cin >> num4;
                    cout << "    q   : ";
                    cin >> num5;

                    if (num4 == 0 && num5 == 0)
                    {
                        cout << "p or q  : 0 ";
                    }
                    else if (num4 > 1 || num4 < 0 || num5 > 1 || num5 < 0)
                    {
                        cout << "\n This number is not allowed , please try again .\n";
                    }
                    else
                    {
                        cout << "p or q  : 1 ";
                    }
                    cout << endl << "\n--------------------------------------- " << endl;

                    break;







                case 4:

                    int num6, num7;
                    cout << endl << "\n--------------------------------------- " << endl;
                    cout << "\n##  Disjunction operator [ Exclusive XOR ]  ## " << endl;
                    cout << "    p   : ";
                    cin >> num6;
                    cout << "    q   : ";
                    cin >> num7;

                    if (num6 > 1 || num6 < 0 || num7 > 1 || num7 < 0)
                    {
                        cout << " \nThis number is not allowed , please try again .\n";
                    }
                    else if (num6 == 0 && num7 == 1)
                    {
                        cout << "p xor q : 1 ";
                    }
                    else if (num6 == 1 && num7 == 0)
                    {
                        cout << "p xor q : 1 ";
                    }
                    else
                    {
                        cout << "p xor q : 0 ";
                    }
                    cout << endl << "\n--------------------------------------- " << endl;

                    break;







                case 5:

                    int num8, num9;
                    cout << endl << "\n--------------------------------------- " << endl;
                    cout << "\n##  Implication operator  ## " << endl;
                    cout << "p        : ";
                    cin >> num8;
                    cout << "q        : ";
                    cin >> num9;

                    if (num8 > 1 || num8 < 0 || num9 > 1 || num9 < 0)
                    {
                        cout << " \nThis number is not allowed , please try again .\n";
                    }
                    else if (num8 == 1 && num9 == 0)
                    {
                        cout << "p ---> q : 0 ";
                    }
                    else
                    {
                        cout << "p ---> q : 1 ";
                    }
                    cout << endl << "\n--------------------------------------- " << endl;


                    break;




                case 6:

                    int num10, num11;
                    cout << endl << "\n--------------------------------------- " << endl;
                    cout << "\n##  BI-Implication operator  ## " << endl;
                    cout << "p         : ";
                    cin >> num10;
                    cout << "q         : ";
                    cin >> num11;

                    if (num10 > 1 || num10 < 0 || num11 > 1 || num11 < 0)
                    {
                        cout << "\nThis number is not allowed , please try again .\n";
                    }
                    else if (num10 == 0 && num11 == 1)
                    {
                        cout << "p <---> q : 0 ";
                    }
                    else if (num10 == 1 && num11 == 0)
                    {
                        cout << "p <---> q : 0 ";
                    }
                    else
                    {
                        cout << "p <---> q : 1 ";
                    }
                    cout << endl << "\n--------------------------------------- " << endl;

                    break;





                case 7:
                    cout << "\n## THANK YOU FOR USING . ##" << endl;
                    break;





                default:
                {
                    cout << "\n## This number is not in the list, please select a number from the list . ##" << endl;
                }




                } // switch is end


            }  //   for is end


        }

        break;



        case 'B':
        {
            int n1, n2, GCD;
            cout << "                    ----------------------------------------------------------------------------------------------------------------------------\n";
            cout << "                                                     GREATEST COMMON DIVISORS [ GCD ]  \n\n";

            cout << "Enter Two Number : \n";
            cin >> n1 >> n2;
            if (n2 > n1)
            {
                int temp = n2;
                n2 = n1;
                n1 = temp;
            }
            for (int i = 1; i <= n2; ++i)
            {

                if (n1 % i == 0 && n2 % i == 0)
                {
                    GCD = i;
                }

            }

            cout << "GCD NUMBER IS = " << GCD << endl ;


        }

        break;



        case 'C':

        break;
        }


    }



    return 0;
}