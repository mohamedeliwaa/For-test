#include <iostream>
using namespace std;
int main()
{
    int accountnumber, customercode, R_num_of_premium_channels, B_num_of_premium_channels;
    char customer_type;
    cout << "                                                                       CABLE COMPANY BILLING\n\n" << endl;
    cout << "Enter the account number :  ";
    cin >> accountnumber;
    cout << "Enter the customer code :   ";
    cin >> customercode;
    cout << "Enter the customer type : [ R , r ] if Residentail , [ B , b ] if Business : \n";
    cin >> customer_type;


    if (customer_type == 'R' || customer_type == 'r')   // if Residentail customers .
    {
        int R_channel, R_amountDue;
        const double R_bill_proc_fees = 4.50;
        const double R_basic_serv_cost = 20.50;
        const double R_cost_prem_channel = 7.50;

        cout << "Enter the number of premium channels   :\n";
        cin >> R_num_of_premium_channels;

        R_channel = R_cost_prem_channel * R_num_of_premium_channels;
        R_amountDue = R_bill_proc_fees + R_basic_serv_cost + R_channel;
        cout << "Amount Due : " << R_amountDue << " $ \n" << endl;

    }



    else if (customer_type == 'B' || customer_type == 'b') // if Business customers .
    {

        int B_channel, B_amountDue, B_bas_ser_conn;
        const double B_bill_proc_fees = 15.00;
        const double B_basic_serv_cost = 75.00;
        const double B_cost_prem_channel = 50.00;
        const double B_basic_conn_cost = 5.00;

        cout << "Enter the number of basic service connections  :\n";
        cin >> B_bas_ser_conn;
        cout << "Enter the number of premium channels   :\n";
        cin >> B_num_of_premium_channels;
        B_channel = B_cost_prem_channel * B_num_of_premium_channels;

        if (B_bas_ser_conn <= 10)
        {

            B_amountDue = B_bill_proc_fees + B_basic_serv_cost + B_channel;
            cout << "Amount Due : " << B_amountDue << " $ ";
        }

        else
        {


            B_amountDue = B_bill_proc_fees + B_basic_serv_cost +
                (B_bas_ser_conn - 10) * B_basic_conn_cost + B_channel;

            cout << "Amount Due : " << B_amountDue << " $ \n" << endl;

        }

    }


    else
    {

        cout << "\nInvalid customer type , please try again . \n" << endl;

    }


    return 0;
}