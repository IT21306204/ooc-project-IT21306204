#ifndef shop
#define shop
#include <iostream>
#include "RegisteredCustomer.h"
#include "Order.h"

using namespace std;

class Order;

class shopper : public RegisteredCustomer
{
private:
    string shopperID; 
    
public:
    shopper(){
      shopperID = "SID";
    }

    shopper(const char pName[],string SID, int cPhone,string cEmail,string cAddress,string cDOB):RegisteredCustomer(pName,cPhone,cEmail,cAddress,cDOB){
        shopperID = SID;
    }

    void buyProduct() {

    }
    void returnProduct() {

    }
    void displayRcinfo(){
        cout<< "Shopper ID = " << shopperID << endl<<endl;

    }
    ~shopper(){
        cout<<"shopper details deleted"<<endl;
    }
};
#endif
