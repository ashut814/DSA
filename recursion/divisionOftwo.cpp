#include<iostream>
using namespace std;

int division(int a , int b) {
	if (b == 0) return 0;
	if (a == b) return 1;
	if (a < b) return 0;

	return 1 + division(a - b , b);
}
int main()
{
	int a , b;
	cin >> a >> b;
	cout << division(a, b);
}