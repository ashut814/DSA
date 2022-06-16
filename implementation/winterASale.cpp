#include <bits/stdc++.h>
using namespace std;
int main()
{
	double discount, costPrice;
	cin >> discount >> costPrice;
	double salesPrice = costPrice - ((costPrice * discount) / 100);
	cout << salesPrice;
}