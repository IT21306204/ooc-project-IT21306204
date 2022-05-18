#ifndef feed
#define feed
#include <cstring>
#include "RegisteredCustomer.h"
#include <iostream>
#define SIZE7 2
using namespace std;

class Feedback{
  private:
    string feedbackID;
    string feedbackDescripton;
    string feedbackDate;
    RegisteredCustomer *Rec;
  public:
    void assginFeedback(string FID, string Description, string date){
      feedbackID = FID;
      feedbackDescripton = Description;
      feedbackDate = date;
    }
    void addFeedback(RegisteredCustomer *rc){
      Rec = rc;
    }
void displayFeedback(){
      cout << "" << endl;
      cout << "Feedback ID: " << feedbackID << endl;
      cout << "Feedback Descripton: " << feedbackDescripton << endl;
      cout <<"Feedback date: " << feedbackDate << endl<<endl;
}
};
#endif