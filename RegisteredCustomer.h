#ifndef RC
#define RC
#include <iostream>
#include <string>
#include "UserProfile.h"
#include "GuestUser.h"
using namespace std;

class RegisteredCustomer : public GuestUser
{
protected:
    int customerPhone;
    string customerEmail;
    string customerAddress;
    string customerDOB;
    UserProfile *upro1;
public:
    RegisteredCustomer()
  {
    customerPhone = 000;
    customerEmail = "wca";
    customerAddress = "effw";
    customerDOB = "swdw654";
  }
    RegisteredCustomer(const char pName[],int cPhone,string cEmail,string cAddress,string cDOB):GuestUser( pName)
    {
     customerPhone = cPhone;
     customerEmail = cEmail;
     customerAddress = cAddress;
     customerDOB = cDOB;
     upro1 = new UserProfile();
    }
    void editRDetails();
    
    virtual void displayRcinfo() {}

    void displayRinfo()
    {
        cout<<"Customer phone No : " << customerPhone << endl;
        cout<<"Customer Email : " << customerEmail << endl;
        cout<<"Customer Address : " << customerAddress << endl;
        cout<<"Customer DOB : " << customerDOB << endl;
        displayRcinfo();
    }
    void addUserProfile(UserProfile *user){
      upro1 = user;
    }
    void login()
    {

    }
    void logout()
    {

    }
    ~RegisteredCustomer()
    {
        cout<<"Registerded customer deleted" << endl;
        
        delete upro1;

    }

};
#endif
