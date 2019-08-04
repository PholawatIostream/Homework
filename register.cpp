#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch;
	string u, p, user, pass;
	do {
		cout << "////////////MENU//////////\n";
		cout << "1. Regiter\n";
		cout << "2.Login\n";
		cout << "Q.Exit Porgram\n";
		cout << endl;
		cout << "Enter your choose number :";
		cin >> ch;
		cout << endl;
		if (ch == '1')
		{
			cout << "**********REGITER**********\n";
			cout << "Input usrename :";
			cin >> u;
			cout << "Input pass :";
			cin >> p;
			cout << endl;
		}
		else if (ch == '2')
		{
			cout << "*********LONIN***********\n";
			int  a = 1;
			do {
				cout << "Input usrename :";
				cin >> user;
				cout << "Input pass :";
				cin >> pass;
				if (u == user && p == pass)
				{cout << "Username or Pas
					sword correct";
					cout << endl;
				}
				else {
					cout << "!!!Username or Password  incorrect Please try again!!!";
					cout << endl;
				}
			} while ((u == user && p == pass) != 1);
		}

		else if (ch == 'Q') {
			cout << "Exit Porgram ";
			cout << endl;
		}
		else {
			cout << endl;
		}

	} while (ch != 'Q');

	return(1);

}