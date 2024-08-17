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
		BankAccount(int acc, int b){
			account_number=acc;
			balance=b;
		}
		void deposit(int m){
			cout<<" so total amount in account = "<<balance;	
		}

		
};
int main(){
	int a,money, amount_withdraw, account;
	cout<<"first of all, enter money in account if you wanna withdraw?"<<endl;
	cout<<"enter account num ";
		cin>>account;
		cout<<endl<<"how much money you wanna deposit?";
		cin>>money;
	
		
	
		BankAccount obj(account,money);
		cout<<"money is deposited";
		obj.deposit(money);


		cout<<endl<<"how much money you wanna withdraw?";
		cin>>amount_withdraw;
		cout<<"money is withdrawd from account";

		
		
	}

	









 
