#include<iostream>
using namespace std;
class bank{
    int accno,balance=100,dep,amount;
    char name[10],type[10];
    public: 
    void assign(){
         cout<<"Enter name and type of account:";
         cin>>name>>type;
         cout<<"Enter account no.:";
         cin>>accno;
    }
    void deposit(){
         cout<<"Enter amount to deposit:";
         cin>>dep;
         balance+=dep;
    }
    void withdraw(){
        cout<<"Enter amount to withdraw:";
        cin>>amount;
        if(amount>balance)
        cout<<"Not sufficient balance available";
        else 
        balance=balance-amount;
    }
    void display(){
         cout<<"Name of the account holder:"<<name<<" Balance="<<balance;
    }
};  
int main()
{
    bank a;
    char c,d;
    a.assign();
    cout<<"Do you want to deposit amount: Press y for yes and n for no::";
    cin>>c;
    if(c=='Y' || c=='y'){
       a.deposit();
      }
    cout<<"Do you want to withdraw money: Press y for yes and n for no::";
    cin>>d;
    if(d=='Y' || d=='y'){
       a.withdraw();
      }
    a.display();
    return 0;
}