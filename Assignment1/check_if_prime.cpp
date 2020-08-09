//Check whether the inputed number is prime or not
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the number : ";
	cin >> n;

	int div = 2;
	bool divided = false;
	while (div < n) {
		if (n % div == 0) {
			divided = true;
			break;
		}
		div = div + 1;
	}
	if (!divided) {
		cout << "The given number is Prime" << endl;
	}
	else
	{
		cout << "The given number is Not Prime" << endl;
	}
	
}
