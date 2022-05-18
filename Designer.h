#ifndef desir
#define desir
#include <iostream>
#include "RegisteredCustomer.h"
using namespace std;

class Designer : public RegisteredCustomer
{
protected:
    string designerID;
public:

    Designer(const char pName[],int cPhone,string cEmail,string cAddress,string cDOB,string DID):RegisteredCustomer( pName,cPhone,cEmail,cAddress,cDOB){
        designerID = DID;
       
    }
    
    void sellDesigns(){

    }
    void displayRcinfo(){
        cout<< "Designer ID: " << designerID << endl<<endl;;

    }
    ~Designer(){
        cout<<"Designer details deleted"<<endl;
    }
};
#endif