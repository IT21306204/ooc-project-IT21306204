#ifndef guestU
#define guestU
#include<iostream>
#include<cstring>
using namespace std;

class GuestUser{
protected:
  char cName[30];
public:
  GuestUser()
  {
    strcpy(cName,"");
  }

  GuestUser(const char pName[])
  {
    strcpy(cName, pName);
  }
  virtual void displayRinfo() {}


  void displayRDetails()
  {
    cout << endl;
	  cout << "User Name = " << cName << endl;
    displayRinfo();
  }

  void Register()
  {
    
  }

  char searchProduct()
  {
    
  }

  ~GuestUser()
  {
    cout << "Guest user deleted" << endl;
  }

};


#endif