#include "banking.h"
#include "account.cpp"
#include "banking.cpp"
int main(){
    Banking b;
    b.add_account(2,"kichu",200.0,"8137826965");
    b.add_account(3,"dona",300.0,"8137826955");
    b.add_account(4,"riya",100.0,"8237826965");
    b.add_account(5,"niya",800.0,"9137826965");
   
    b.display_all();
    b.find_account_by_id(1)->display();
    std::cout<<"Average price:"<<b.avg_balance()<<"\n";
    b.remove_account(2);
    b.display_all();
    b.find_account_with_max_balance()->display();
    return 0;
}