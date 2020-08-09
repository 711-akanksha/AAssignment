 /*Create an Account class that a bank might use to represent customers’ bank accounts.
 Include a data member of type int to represent the account balance.
 Provide a constructor that receives an initial balance and uses it to initialize the data member.
  The constructor should validate the initial balance to ensure that it’s greater than or equal to 0.
  If not, set the balance to 0 and display an error message indicating that the initial balance was invalid.
   Provide three member functions. Member function Credit should add an amount to the current balance.
    Member function Debit should withdraw money from the Account and ensure that the debit amount does not exceed the Account’s balance.
    If it does, the balance should be left unchanged and the function should print a message indicating “Debit amount exceeded account balance.
    ” Member function getBalance should return the current balance.
    Create a program that creates two Account objects and tests the member functions of class Account. */


 #include<iostream>
#include <string>
using namespace std;

class Account
{
 private:
  int accountBalance;


public:
 Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Initial balance was invalid."<<endl;
 }
}

void credit( int balance)
{
 accountBalance = accountBalance + balance;
}

void debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded account balance."<<endl;
 }
}
int getAccountBalance()
{
 return accountBalance;
}
};
int main()
{
 Account Account1(3000);
 Account Account2(-100);
 cout << "Account1's initial balance is: "<< Account1.getAccountBalance()<< "\nAccount2's initial balance is: "<< Account2.getAccountBalance() << endl;
 Account1.credit(200);
 Account2.credit(1000);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
 Account1.debit(50);
 Account2.debit(200);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
}
