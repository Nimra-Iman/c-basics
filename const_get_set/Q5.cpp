// Write a C++ program to implement a class called
//  BankAccount that has private 
//member variables for account number and balance. Include
// member functions to 
//deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount{
	private:
		int account_number;
		int balance;
		int withdraw;
		int amount_remain;
	public:
		BankAccount(int acc, int b, int money_after_withdraw){
			account_number=acc;
			balance=b;
			amount_remain=money_after_withdraw;
		}
		void deposit(int m){
			cout<<" so total amount in account = "<<balance;	
		}
		void amount_left(){
			amount_remain=balance-withdraw;
			cout<<"the remaining amount in account = "<<amount_remain;
		}
		
};
int main(){
	int a,money, amount_withdraw, account;
	cout<<"first of all, enter money in account if you wanna withdraw?"<<endl;
	cout<<"enter account num ";
		cin>>account;
		cout<<endl<<"how much money you wanna deposit?";
		cin>>money;
	
		BankAccount obj(account,money,amount_withdraw);
	
		
		cout<<"money is deposited";
		obj.deposit(money);

		
//		cout<<"enter account num ";
//		cin>>account;

		cout<<endl<<"how much money you wanna withdraw?";
		cin>>amount_withdraw;
		obj.amount_left();
		
		
	}

	









 
