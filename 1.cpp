#include <iostream>
#include <string>

using namespace std;
int update_balance(string, float, float &balance);
int main()
{

	float f, t, dollars, balance = 10000;
	string x;
	char command;
	int q;

	cout << "Exit with 0 \n";
	cout << "Your balance = " << balance  << endl;

	do{
		
		cout << "Input command (1 or withdraw, 2 deposit): ";
		cin >> command;
		if (command == '0')break;
		cout << "Input amount : ";
		cin >> dollars;
		x = command;
		f = dollars;

		update_balance(x, f, t);
		cout << "Your balance = " <<update_balance(x, f, balance);
		cout  << endl;

	} while (command != '0');
	cout << "End\n";
}
int update_balance(string command, float dollars, float &balance)
{


	if (command == "1")
	{
		balance = balance - dollars;

	}

	if (command == "2")
	{
		balance = balance + dollars;
	}

	return(balance);
}