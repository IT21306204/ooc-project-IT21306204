#ifndef pay
#define pay
#include <iostream>
#include <cstring>
#include "Order.h"
#include "Shopper.h"
using namespace std;

class Payment
{
private:
	string paymentID;
	string paymentMethod;
	float total;
	string paymentDate;
	shopper* s1;
	Order * o1;



public:
  Payment()
  {
    paymentID = "P455";
    paymentMethod = "Cash";
    total = 0000.0;
    paymentDate = "4565";
  }
	Payment(string pID,string PMet, float pTot,string pDate)
{
	paymentID = pID;
	paymentMethod = PMet;
	total = pTot;
	paymentDate = pDate;
}

void displayPaymentDetails()
{
	cout << "Payment ID: " << paymentID << endl;
	cout << "Payment Method: " << paymentMethod << endl;
	cout << "Total: " << total << endl;
	cout << "Payment Date: " << paymentDate << endl<<endl;

}
void validateDetails()
{

}
void calTotal()
{

}
void addProduct(Order *or1)
  {
  	o1 = or1;
  }
  void addShopper(shopper *sho1)
  {
    s1 = sho1;
  }
		
};
#endif