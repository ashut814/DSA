#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ;
    cin >> n ;
    int r = 1;

    while (r <= n)
    {
        int c = 1;
        while ( c <= n - r + 1 ) {
            cout << c;
            c = c + 1 ;
        }
        int str = r - 1 ;
        while ( str ) {
            cout << "*";
            str = str - 1 ;
        }
        int str2 = r - 1;
        while (str2) {
            cout << "*";
            str2 = str2 - 1 ;
        }
        int c2 = n - r + 1 ;
        while ( c2) {

            cout << c2;
            c2 = c2 - 1 ;
        }
        cout << endl;
        r = r + 1 ;
    }
}

int main()
{
    solve();
}