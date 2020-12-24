#include "banking.h"
using namespace std;
  void Banking::add_account(int id1,string name1,double balance1,string phone1){
      accounts.emplace_back(id1,name1,balance1,phone1);
  }



  void Banking::remove_account(int id1){
      list<Account>::iterator iter;
      for(iter=accounts.begin(); iter!=accounts.end(); ++iter){
       if(iter->get_id() == id1)
          break;
       }
   if(iter!=accounts.end())
     accounts.erase(iter);

  }


  void Banking::display_all(){
      list<Account>::iterator iter;
      for(iter=accounts.begin(); iter!=accounts.end(); ++iter)
         iter->display();
  }


  Account* Banking::find_account_by_id(int id1){
     list<Account>::iterator iter;
     for(iter=accounts.begin(); iter!=accounts.end(); ++iter){
       if(iter->get_id() == id1){
              break;
       }
          
   }
   if(iter!=accounts.end())
     return &(*iter);
   else
     return nullptr;
  }


  double Banking::avg_balance(){
      double total=0;
      list<Account>::iterator iter;
      for(iter=accounts.begin(); iter!=accounts.end(); ++iter){
           total += iter->get_balance();
    }
  return total/accounts.size();
  }


  Account* Banking::find_account_with_max_balance(){
     list<Account>::iterator iter;
     iter = accounts.begin();
     auto maxIter=iter;
     double maxPrice=iter->get_balance();
     ++iter;
    for(;iter!=accounts.end(); ++iter){
      if(iter->get_balance() > maxPrice) {
        maxPrice = iter->get_balance();
        maxIter = iter;
    }
  }
    return &(*maxIter);

  }


  int Banking::count_accounts_in_range(int minval,int maxval){
         int count=0;
         list<Account>::iterator iter;
         for(iter=accounts.begin(); iter!=accounts.end(); ++iter)
         {
           if(iter->get_balance()>=minval && iter->get_balance()<=maxval){
               count++;
           }
         }
         return count;
  }