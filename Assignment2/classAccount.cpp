#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balance can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{
	int openBalance;
	cout << "Enter the amount to start account : ";
	cin >> openBalance;
	account customer1(openBalance);
	int paisa;
	cout << "Enter the amount to be added : ";
	cin >> paisa;
	customer1.Credit(paisa);
	cout << "Total amount : " <<  customer1.getBalance() << "\n";
	double paisa1 ;
	cout << "Enter the amount to be removed : ";
	cin >> paisa1;
	customer1.Debit(paisa1);
	cout << "Total amount : " << customer1.getBalance() << "\n";
	cout << "Enter the amount to start account : ";
	cin >> openBalance;
	account customer2(openBalance);
	cout << "Enter the amount to be added : ";
	cin >> paisa;
	customer2.Credit(paisa);
	cout << "Total amount : " << customer2.getBalance() << "\n";
	cout << "Enter the amount to be removed : ";
	cin >> paisa1;
	customer2.Debit(paisa1);
	cout << "Total amount : " << customer2.getBalance() << "\n";






	return 0;
}