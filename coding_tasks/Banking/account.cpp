  
  #include "account.h"
  Account::Account():id(1),name("silpa"),balance(500.0),phone_no("9895444317"){}
  Account::Account(int id1 ,string name1 ,double balance1, string phone1):id(id1),name(name1),balance(balance1),phone_no(phone1){}


  int Account::get_id(){
      return id;
  }
  string Account::get_name(){
      return name;
  }
  double Account::get_balance(){
      return balance;
  }
  string Account::get_phone_no(){
      return phone_no;
  }
  

  void Account::display() {
        cout<<"id : "<<id<<"name : "<<name<<"balance : "<<balance<<"phone_no "<<phone_no;
  }