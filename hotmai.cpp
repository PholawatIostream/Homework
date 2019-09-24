#include<iostream>
#include<time.h>
#include<string>
#include<iomanip>
using namespace std;
void call_display(int ar[5][6]);
void call_graph(string g[5][6]);
int main()
{
	int ar[5][6];
	string g[5][6];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++) {
			ar[i][j] = rand() % 10;
			if (ar[i][j] != 0)
				g[i][j] = '*';
			else
				g[i][j] = ' ';
		}
	}
	call_display(ar);
	call_graph(g);
	return 0;
}
void call_display(int ar[5][6])
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			cout << ar[i][j] << "\t";
		}
		cout << endl;
	}
}
void call_graph(string g[5][6])
{
	cout << "--------------display graph--------------------\n";
	cout << "\t0\t1\t2\t3\t4\t5\t" << endl;
	cout << "-------------------------------------------------\n";
	for (int i = 0; i < 5; i++) {
		cout << i << "|";
		for (int j = 0; j < 6; j++) {
			cout << "\t" << g[i][j];
		}
		cout << endl;
	}
}