#include<iostream>
using namespace std;
int main()
{

	int num;
	cout<<" Enter Point : ",cin>>num;
		if ((num>0 ) && (num < 49))cout<<" You got F ";
		else if ((num > 50) && (num < 59))cout<<" You got D ";
		else if ((num > 60) && (num < 69))cout<<" You got C ";
		else if ((num > 70) && (num < 79))cout<<" You got B ";
		else if ((num > 80) && (num < 100))cout<<" You got A ";
		cout<<endl;
	return 0;
}