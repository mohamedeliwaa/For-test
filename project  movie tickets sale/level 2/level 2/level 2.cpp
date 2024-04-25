
#include <iostream>
#include <string>
using namespace std;


string MovieName;
int Number_of_Tickets_sold;
double GrossAmount, PercentageDonation, AmountDonated, NetSale;

// Movie name function . 
void Moviename()  
{
	cout << " Movie Name: ............................. ";
	getline(cin, MovieName);
} 
// Function of the number of tickets sold .
void NumberofTicketssold()
{
  cout << " Mars Number of Tickets Sold: ............ ";
  cin >> Number_of_Tickets_sold;
}
// Function of the money generated from selling tickets .
void Grossamount()
{
	GrossAmount = Number_of_Tickets_sold * 3.452830;
	cout << " Gross Amount: ........................... " << GrossAmount << " $ \n";
}
// A function of the percentage of Fos that we will donate .
void Percentage()
{
	cout << " Percentage of Gross Amount Donated: ..... ";
	cin >> PercentageDonation;
}
// A function of the money I donated .
void Amountdonated()
{
	AmountDonated = GrossAmount * PercentageDonation / 100;
	cout << " Amount Donated: ......................... " << AmountDonated << " $ \n";
}
// Net profit function .
void Netsale()
{
	NetSale = GrossAmount - AmountDonated;
	cout << " Net Sale: ............................... " << NetSale << " $ \n";
}
int main()
{
	cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n" << endl;
	Moviename();
	NumberofTicketssold();
	Grossamount();
	Percentage();
	Amountdonated();
	Netsale();

	return 0;
}