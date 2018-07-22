#include <iostream>
#include <cmath>

using namespace std;


float truncate(long double num, int dec)
{
	long double temp1 = num * (pow(10,dec));
	long double temp2 = floor(temp1);
	
	return temp2 / pow(10, dec);
}



int main()
{
	long double pi = 3.1415926535897932384626433832795028841971693993751058209;
	int digits;
	
	cout << "How many digits of pi would you like to view?" << endl;
	cin >> digits;
	
	if (digits == 0)
		cout << "No pi for you";
	
	if (digits == 1)
		cout << "Well that's just 3." << endl;
		
	if (digits > 1)
		cout << "Here's your pi :" << truncate(pi, digits-1) << endl;
	
	
	return 0;	
}

