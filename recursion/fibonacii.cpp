#include <iostream>
using namespace std;
int f(int n) {
	if (n <= 1) return n;
	int last = f(n - 1);
	int secLast = f(n - 2);

	return last + secLast;
}
int main(int argc, char const *argv[])
{
	/* code */
	cout << f(4);
	return 0;
}