#ifndef __BANKING_H
#define __BANKING_H

#include "account.h"
#include <list>
using namespace std;
class Banking{
  list<Account> accounts;
  public:
  void add_account(int,string,double,string);
  void remove_account(int);
  void display_all();
  Account* find_account_by_id(int);
  double avg_balance();
  Account* find_account_with_max_balance();
  int count_accounts_in_range(int,int);
};
#endif