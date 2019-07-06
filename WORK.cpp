#include<iostream>
using namespace std;
int main()
{
	float fahrenheit,celcius;
	cout<<"Enter Temper Celcius = ";
	cin>> celcius;
	fahrenheit = celcius * 9/5 +32;
	cout<<"The Temper in Fahrenheit = "<< fahrenheit <<endl;
	cout<<((fahrenheit>70) ? "Now the weather in Thailand is HOT ":
		                     "Now the weather in Thailand is COOL")<<endl;
return 0;
}