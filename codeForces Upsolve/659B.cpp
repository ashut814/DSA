#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define mod (int) 998244353
#define MOD (int) 1e9+7
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int int
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define endl "\n"
#define ii pair<int, int>
#define pp pair<ll , string>
#define vii vector<ii>
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)

const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}



operator<(pp a, pp b)
{
	return a.first > b.first;
}

void helper()
{
	ll i , j , k;
	ll n , m , r , p;
	string str;
	cin >> n >> m;
	priority_queue<pp> pq[m];
	for (int i = 0  ; i < n ; i++) {
		cin >> str >> r >> p;
		pq[r - 1].push(make_pair(p, str));
	}
	pp a , b , c;
	for (int i = 0 ;  i < m ; i++) {
		a = pq[i].top() ; pq[i].pop();
		b = pq[i].top() ; pq[i].pop();
		c = pq[i].top();

		if (b.first == c.first && pq[i].empty() == false) {
			cout << "?" << endl;
		}

		else {
			cout << a.second << " " << b.second << endl;
		}
	}
}

int main()
{
	helper();
}