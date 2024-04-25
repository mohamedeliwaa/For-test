 // The program required by Dr. Mahmoud Khaled .
/*
this is cout

Movie Name: ............. ( string ).................
Mars Number of Tickets Sold: .......( int )......
Gross Amount: .................( double )...........
Percentage of Gross Amount Donated: ...( double )...
Amount Donated: ...............( double )...........
Net Sale: ...................( double ).............

*/

#include <iostream>
#include <string>


using namespace std;
int main()
{
  cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n" << endl;
  string MovieName;
  int Number_of_Tickets_sold;
  double GrossAmount , PercentageDonation , AmountDonated , NetSale;


  cout << " Movie Name: ............................. ";
  getline(cin, MovieName);
  cout << " Mars Number of Tickets Sold: ............ ";
  cin >> Number_of_Tickets_sold;
  GrossAmount = Number_of_Tickets_sold * 3.452830;
  cout << " Gross Amount: ........................... " << GrossAmount << " $ \n";
  cout << " Percentage of Gross Amount Donated: ..... " ;
  cin >> PercentageDonation;
  AmountDonated = GrossAmount * PercentageDonation / 100;
  cout << " Amount Donated: ......................... " << AmountDonated << " $ \n";
  NetSale = GrossAmount - AmountDonated;
  cout << " Net Sale: ............................... " << NetSale << " $ \n";
  
  return 0;
}
