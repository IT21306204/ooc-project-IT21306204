#ifndef prod
#define prod
#include<iostream>
#include "InventoryManager.h"
#include "Shopper.h"
#define SIZE4 2
using namespace std;

class InventoryManager;

class Product{
private: 
  string productID;
  string productName;
  string productPrice;
  string productColor;
  string productSize;
  shopper *shppr[SIZE4];
  InventoryManager *ivm;
public:
  Product(){
    productID = "P000";
    productName = "pName";
    productPrice = "0000";
    productColor = "pColor";
    productSize = "pSize";
  }
  Product (string prdtID, string prdtName, string prdtPrice, string prdtColor, string prdtSize){
    productID = prdtID;
    productName = prdtName;
    productPrice = prdtPrice;
    productColor = prdtColor;
    productSize = prdtSize;
  }


  void filterProducts()
  {
    
  }

  void displayPrdtDetails() //Display product details
  {
    cout << "Product ID: " << productID << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Price: " << productPrice << endl;
    cout << "Product Color: " << productColor << endl;
    cout << "Product Size: " << productSize << endl<<endl;
  }

  void addShopper(shopper *shppr1, shopper *shppr2)
  {
    shppr[0] = shppr1;
    shppr[1] = shppr2;
  }
};
#endif