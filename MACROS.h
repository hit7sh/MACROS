// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>
 
#define __speed() cin.tie(0)->sync_with_stdio(0), cin.exceptions(cin.failbit);

#ifndef ONLINE_JUDGE
#define dbg(...) write(#__VA_ARGS__, __VA_ARGS__)
#else
#define dbg(...) 42
#endif

#define Yes(x) print((x) ? "Yes" : "No")
#define TC     int t; for (cin >> t; t--; )
 
#define f0(i, n)  for (i = 0; i < (int)(n); i++)
#define f1(i, n)  for (i = 1; i <=(int)(n); i++)
 
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x.size())
 
#define EB emplace_back
#define PB push_back

#define LB lower_bound
#define UB upper_bound

#define endl "\n"
#define S second
#define F first

using namespace std;
using mii = map<int, int>;
using pii = pair<int, int>;
 
using ll = int64_t;
using vi = vector<int>;
 
using vvi = vector<vi>;
using vl = vector<ll>;
 
const pair<int, int> DD[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
const int mod = 1e9 + 7, mxN = 2e5 + 5, INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
 


template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }
template <typename... T> void write(string vars, T... args) { cout << endl; cout << "[ "; cout << vars << " = "; string delim = ""; (..., (cout << delim << args, delim = ", ")); cout << "]"; cout << endl; }

template <typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.F >> p.S; return in; }
template <typename T1, typename T2> ostream& operator<<(ostream& ot, pair<T1, T2>& p) { ot << p.F << ' ' << p.S; return ot; }

template <typename T1, typename T2> bool cmax(T1& a, T2 b) { if (b > a) { a = b; return true; } return false; }
template <typename T1, typename T2> bool cmin(T1& a, T2 b) { if (b < a) { a = b; return true; } return false; }

template <typename T> istream& operator>>(istream& in, vector<T>& v) { for (T& x:v) in >> x; return in; }
template <typename T> ostream& operator<<(ostream& ot, vector<T>& v) { for (T& x:v) ot << x << ' '; return ot;}

template <typename T> ostream& operator<<(ostream& ot, set<T>& s) { for (T x : s) ot << x << ' '; return ot; }

ll mod_pow(ll x, ll y){ll res = 1;x = x % mod;while(y>0){if(y&1)res = (res*x) % mod; y = y>>1;x = (x*x) % mod; }return res; }ll mod_inv ( ll n ){ll ans = mod_pow ( n , mod - 2 ) ;return ans ;}ll mul(ll a, ll b){a%=mod, b%=mod;return (a*b)%mod;}ll sub(ll a,ll b){a%=mod, b%=mod;return (a-b+mod)%mod;}ll add(ll a, ll b){a%=mod, b%=mod;return (a+b)%mod;}


#define random(a, b) uniform_int_distribution<int>(a, b)(rng) // random number [a, b]
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());




void solve() {
  
} 



main() { 
  cout << fixed << setprecision(6);  

  __speed() TC solve();
  // int t, i; for (cin >> t, i = 1; i <= t; i++) cout << "Case #" << i << ": ", solve();
}
