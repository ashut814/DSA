// formula's

/*

1:) Addition : (a+b) % m = ((a%m) + (b%m)) % m

2:) Multiplication : (a * b) % m = ((a%m) * (b%m)) %m

3:) Substraction : (a-b) % m = ((a%m) - (b%m) + m) % m

4:) Division : (a/b) % m = ((a%m)* (b^-1) % m) % m

*/


/* ques - given a number N, print its factorial
// contraints - 1 <= N <= 100
// print ans modulo M
*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int M = 47;
    long long fact = 1;
    for (int i = 2 ; i <= n ; i++) {
        fact = (fact * i) % M; // 5! = (1 * 2 * 3 * 4 * 5) % 47 =>
        // ((1*2*3*4) % 47 * (5 % 47)) % 47
        // ((1*2*3) % 47 * (4%47) * 5) % 47
        // ((1*2) % 47 * (3%47) * 4 * 5) % 47
        // ((1) % 47 * (2%47) * 3 * 4 * 5) % 47
        // (1 * 2 * 3 * 4 * 5) % 47 => 24
    }
    cout << fact << endl;
    return 0;
}