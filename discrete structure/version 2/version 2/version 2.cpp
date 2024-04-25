#include <iostream>
#include <cmath>

using namespace std;

// Program Logical Operator
void fu_Lo()
{

    cout << "                    ----------------------------------------------------------------------------------------------------------------------------\n";
    cout << "                                                                LOGICAL OPERATOR  \n\n" << endl;
    cout << " * Choose Any Logical Operator You Want From Menu . \n";
    cout << " * NOTE : Please Enter Your Input Only 1 & 0 .\n";
    cout << "  -------------------- MENU -------------------" << endl;
    cout << " | " << " 1- Negation operator                       |" << "\n";
    cout << " | " << " 2- Conjunction operator                    |" << "\n";
    cout << " | " << " 3- Disjunction operator [ Inclusive OR ]   |" << " \n";
    cout << " | " << " 4- Disjunction operator [ Exclusive XOR ]  |" << " \n ";
    cout << "| " << " 5- Implication operator                    |" << " \n";
    cout << " | " << " 6- BI-Implication operator                 |" << " \n";
    cout << " | " << " 7- EXIT                                    |" << " \n";
    cout << "  ---------------------------------------------\n" << endl;
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
            cout << "\n## THANK YOU FOR USING . ##\n" << endl;
            break;





        default:
        {
            cout << "\n## THIS NUMBER IS NOT IN THE MENU, PLEASE SELECT A NUMBER FROM THE MENU . ##\n" << endl;
        }




        } // switch is end


    }  //   for is end
}     //  


// Program GCD 
void fu_G()
{

    int n1, n2, GCD;
    cout << "                    ----------------------------------------------------------------------------------------------------------------------------\n";
    cout << "                                              \t       GREATEST COMMON DIVISORS [ GCD ]  \n\n";

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

    cout << "GCD NUMBER IS = " << GCD << endl;



}


// Program LCM 
void fu_L()
{
    int n1, n2, LCM;
    cout << "                    ----------------------------------------------------------------------------------------------------------------------------\n";
    cout << "                                                              LEAST COMMON MULTIPLES [ LCM ]  \n\n";

    cout << "Enter Two Number : \n";
    cin >> n1;
    cin >> n2;



}



// Prime Numbers
void fu_P()
{
    cout << "                    ----------------------------------------------------------------------------------------------------------------------------\n";
    cout << "                                                                           PRIME NUMBERS  \n\n";


}


// Ceil
void fu_C()
{
    cout << "                    ----------------------------------------------------------------------------------------------------------------------------\n";
    cout << "                                                                               CEIL  \n\n";

    float n_c;
    cout << "Enter Any NUMBER : ";
    cin >> n_c;
    cout << "Ceil = " << ceil(n_c);
}



// Floor
void fu_F()
{ 
    cout << "                    ----------------------------------------------------------------------------------------------------------------------------\n";
    cout << "                                                                               FLOOR  \n\n";

    float n_f;
    cout << "Enter Any NUMBER : ";
    cin >> n_f;
    cout << "Floor = " << floor(n_f);
}



int main()
{
    string name;
    char letter;
    cout << "                                                        \t\tDISCRETE STRUCTURE  \n\n";
    cout << "Enter Your Name : ";
    cin >> name;
    cout << "Hello, " << name << " To The World Of Discrete Structure .\n\n ";


    cout << "* [ A ] LOGICAL OPERATORS .  \n";
    cout << " * [ B ] GREATEST COMMON DIVISORS ( GCD ) . \n";
    cout << " * [ C ] LEAST COMMON MULTIPLES ( LCM ) .\n";
    cout << " * [ D ] PRIME NUMBERS .\n";
    cout << " * [ E ] CEILS .\n";
    cout << " * [ F ] FLOORS .\n\n";



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
            fu_Lo();

        }
        break;



        case 'B':
        {

            fu_G();

        }
        break;



        case 'C':
        {

            fu_L();

        }
        break;




        case 'D' :
        {

            fu_P(); 

        }
        break;



        case 'E':
        {

            fu_C(); 

        }
        break;



        case 'F':
        {

            fu_F(); 

        }
        break;




        
        default:
        {
            cout << "\n##  . ##\n" << endl;  // هذا الحرف غير مسموح به
        }



        }  // switch letter


    }   // for



    return 0;
}


