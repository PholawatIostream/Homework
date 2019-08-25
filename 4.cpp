#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void checknum(int,int);
int main()
{
	cout << "###Welcome to guessing number game#### \n";
	cout << "Secret the has deen chosen" << endl;
	srand(time(NULL));
	int n,h;
	int i = 0;
	n = rand() % 10 + 1;
	do {
		cout << "Guess the number(1 to 10):";
		cin >> h;
		if ( h> 10) { break; }
		else if (h < 1) { break;}
	
		i++;
		checknum(n,h);
	} while (h != n);
	cout << "You made " << i << " guesses" << endl;
	cout << "The secret number is " << n << endl;
	return(0);
}
void checknum(int Random, int Input)
{
		if (Input > Random) {
			cout << "The secret number is higher" << endl;
		}
		else if (Input == Random) {
			cout << "Congratulations!" << endl;	
			Rand == Input;
		}
		else if(Input < Random) {
		cout << "The secret number is lower" << endl;
		}
		
}