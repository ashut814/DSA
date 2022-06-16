#include<iostream>
using namespace std;

int product(int a , int b) {
	if (b == 0 || a == 0) return 0;
	if (a < 0  && b < 0) return -1 * a + product(-1 * a , -1 * b - 1);
	if (a > 0 && b < 0) return -1 * a + product(a , b + 1);
	return 1 * a + product(a , b - 1);
}
int main()
{
	int a , b;
	cin >> a  >> b;
	cout << product(a, b);
	return 0;
}