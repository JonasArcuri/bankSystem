#include <iostream>
#include <string>

using namespace std;

//Função menu Sistema, em inglês



class Account{
	public:
		string usernameAcct;
		double balance;
		int cpf;
};

class UserAccount {
	string accountName;
	string idUser;
	string emailUser;
	
};



double balance = 1973.78;

void bankSystem() {
	
	
	Account acctObj1;
	acctObj1.balance = 1998.83;
	
	

	int option;
	double withdraw, deposit, transfer;
	
	cout << "Hello, Welcome to the FastBank!" << endl;
	cout << "Write what you wanna do today above!" << endl << endl;
	cout << "Select an Option: " << endl << endl;
	
	cout << "1 - Balance" << endl;
	cout << "2 - Withdraw" << endl;
	cout << "3 - Deposit" << endl;
	cout << "4 - Transfer" << endl;
	cout << "5 - Others options" << endl;
	cout << "6 - Online Support" << endl;
	cout << "7 - Exit System" << endl << endl;
	cin >> option;
	
	switch (option){
		case 1:
			int options;
			cout << "Balance: " << balance << endl;
			cout << "Do you want do anything more?" << endl;
			cout << "0 - Back to Menu" << endl;
			cout << "1 - Call Support" << endl;
			cin >> options;
			
			if (options == 0)
			{
				bankSystem();
			}
			else if (options == 1)
			{
				cout << "You can contact us via Email or Whatsapp" << endl;
				cout << "Email : fastbank@gmail.com" << endl;
				cout << "Whatsapp : +55 47988814411" << endl;
				bankSystem();
			}
			else
			{
				cout << "Sorry, We didn't catch your option, try back later!" << endl;
				bankSystem();
			}
			
			break;
			
		case 2: 
			options;
			cout << "How much you wanna Withdraw?" << endl;
			cout << "Actual Balance :" << endl;
			cout << "$" << balance << endl;
			cin >> withdraw;
			
			if (withdraw > balance)
			{
				cout << "Insuficient Balance" << endl;
				cout << "$" << balance << endl;
				cout << "Money Requested " << "$" << withdraw << endl;
				bankSystem();
			}
			else if (withdraw <= balance)
			{
				
				double count;
				count =  balance - withdraw;
				cout << "You have successfully applied" << " $ " << withdraw << endl;
				cout << "New Balance:" << endl;
				cout << count << endl;
				balance = count;
				cout << "What you gonna do?" << endl;
				cout << "0 - Back to Menu" << endl;
				cout << "1 - Contact Support" << endl;
				cout << "2 - Another Withdraw" << endl;
				cin >> options;
				
				if (options == 0)
				{
					cout << "Going Back to Menu!" << endl;
					bankSystem();
				}
				else if (options == 1)
				{
				cout << "You can contact us via Email or Whatsapp" << endl;
				cout << "Email : fastbank@gmail.com" << endl;
				cout << "Whatsapp : +55 47988814411" << endl << endl;
				bankSystem();
				}
				else {
				cout << "Sorry, We didn't catch your option, try back later!" << endl << endl;
				bankSystem();
				}
				
				
			}
			break;	
		
		case 3:
			options;
			cout << "How many you want to Deposit?" << endl;
			cout << "Actual Balance: $" << balance << endl;
			cin >> deposit;
			
			if (deposit > 0) 
			{
				double count;
				count = deposit += balance;
				balance = count;
				cout << "You Sucessfull deposited" << " $" << deposit << " To your Bank Account!" << endl;
				cout << "New Balance:" << endl;
				cout << "$" << balance << endl << endl;
			}
			else 
			{
				cout << "Invalid/Incorret Command, please Try again Later!" << endl;
			}
			
				cout << "What you wanna do now?" << endl;
				cout << "0 - Back to Menu" << endl;
				cout << "1 - Contact Support" << endl << endl;
				cin >> options;
				
				if (options == 0)
				{
					cout << "Going Back to Menu!" << endl;
					bankSystem();
				}
				else if (options == 1)
				{
					cout << "You can contact us via Email or Whatsapp" << endl;
					cout << "Email : fastbank@gmail.com" << endl;
					cout << "Whatsapp : +55 47988814411" << endl << endl;
					bankSystem();	
				}
				else {
					cout << "Invalid/Incorret Command!" << endl;
				}
			
			break;
		case 4:
			options;
			cout << "How many you want to transfer?" << endl;
			cout << "Balance : $" << balance << endl;
			cin >> transfer;
			
			if (transfer)
			{
				double count;
				count = balance - transfer;
				balance = count;
				cout << "Transfer performed successfully" << " Amount $ " << transfer << endl;
				cout << "New Balance" << " $ " << balance << endl;
				cout << "What you wanna do now?" << endl;
				cout << "0 - Back to Menu" << endl;
				cout << "1 - Contact Support" << endl << endl;
				cin >> options;
			}
			

			
			break;
	}
}



int main() 
{
	bankSystem();
	
	cout << "Thanks for testing my System!" << endl;
	cout << "All Rights deserved to @JonasArcuri.DevC++" << endl;
	
	
	
	
	return 0;
}



