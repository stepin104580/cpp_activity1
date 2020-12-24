#ifndef __ACCOUNT_H
#define __ACCOUNT_H
#include<iostream>
#include<string>
using namespace std;
class Account{
  int id;   
  string name;
  double balance;
  string phone_no;
  
  public:
  Account();
  Account(int ,string ,double, string);


  int get_id();
  string get_name();
  double get_balance();
  string get_phone_no();
  void display();

};
#endif