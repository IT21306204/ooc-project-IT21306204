#include "CCO.h"
#include "Designer.h"
#include "Designs.h"
#include "Employee.h"
#include "Feedback.h"
#include "GuestUser.h"
#include "InventoryManager.h"
#include "Manager.h"
#include "Order.h"
#include "Payment.h"
#include "Product.h"
#include "RegisteredCustomer.h"
#include "Shopper.h"
#include "UserProfile.h"
#include "Technician.h"
#include "Report.h"
#include <iostream>
using namespace std;

int main() {
  RegisteredCustomer *r1 = new RegisteredCustomer("Suraj",112456784,"surajZoory@yahoo.com","75A, raigama, Rajagiriya","1997/12/21");
  r1->displayRDetails();

  cout << "" << endl;
  Order *o1 = new Order();
  o1->assignOrderdetails("OD9089");
  o1->displayOrderDetails();

  shopper *s1 = new shopper("Sugath","SID33", 776576546, "sugathrajapaksa@gmail.com", "78/10, Nisala Pedasa, Mattegoda","2000/04/12");
  s1->displayRinfo();

  UserProfile *user = new UserProfile();
  user->assignDetails("CID21360", "Gihan", "yashgn1", 2664);
  user->displayDetails();

  Payment *pa1 = new Payment("P004", "Credit card", 3457.85, "2022/05/10");
  pa1->displayPaymentDetails();

  Employee *e2 =
      new Employee("E001", "Kamal", 30000.0, 40, "0412226155", 5, 8.5);
  e2->displayEmpDetails();

  Feedback *f1 = new Feedback();
  f1->assginFeedback("F001", "I can't add products to my order, please fix it", "2022/04/21");
  f1->addFeedback(r1);
  Feedback *f2 = new Feedback();
  f2->assginFeedback("F002", "Please help me I can't find my order history", "2022/05/10");
  f2->addFeedback(r1);
  //f1->displayFeedback();

  cout << "" << endl;
  CCO *co1 = new CCO("CC01", "kumara@gmail.com", "E002", "Kumara", 40000.0, 50,"2147483647", 4, 5.5);
  co1->reviewFeedback(f1, f2);
  co1->displayEmpDetails();

  InventoryManager *co2 =
      new InventoryManager("IM001", "johnnytech@gmail.com", "E003", "John", 42000.00, 20,"715648972", 4, 5.5);
  co2->displayEmpDetails();

  Designer *d1 = new Designer("Sithumi",769875678, "sithumiGuna@gmail.com", "33/b, upper jackson Road, Galle","2001/05/12", "DID02");
  d1->displayRDetails();

  Designs *de1 = new Designs();
  de1->assignDetails("D0001", "BlueSky", "Blue", "Female");
  de1->addDesigns(d1);
  de1->displayDsgnDetail();

   Manager *m1 = new Manager("M0001", "sammanager@gmail.com", "E008", "Sam",60500.00, 28, "714589621", 5, 5.3);
  m1->displayEmpDetails();

  Report *re1 = new Report();
  re1->assignRpDetails("RID001", "Financial");
  re1->displayRpDetails();

  Technician *t1 = new Technician("T002", "tech.yash@gmail.com", "E005", "Yash",57000.00, 42, "7123456788", 2, 3.5);
  t1->displayEmpDetails();

  GuestUser *gu1 = new GuestUser("Kamal");
  gu1->displayRDetails();
  
  Product *p1 = new Product("P001", "NightSky", "2500.00", "Dark Blue", "L");
  p1->displayPrdtDetails();

  delete e2;
  delete r1;
  delete f1;
  delete f2;
  delete co1;
  delete user;
  delete t1;
  delete d1;
  delete de1;
  delete gu1;
  delete s1;
  delete o1;
  delete p1;
  delete pa1;
  delete m1;
  delete re1;
  delete co2;
}