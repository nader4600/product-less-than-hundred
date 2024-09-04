#include <iostream>
using namespace std;
int main()
{
	int product=0, num;
	while (product < 100)
	{
		cout << "Enter the Number : " << endl;
		cin >> num;
		product = num * 10;
		cout << product << endl;
	}

}