// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";
#define tt int t;for(cin>>t; t--; )

#define f0(i, n) for(i = 0; i < (int)(n); i++)
#define f1(i, n) for(i = 1; i<= (int)(n); i++)

#define cmax(x, y) x=max(x, y);
#define cmin(x, y) x=min(x, y);

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x.size())

#define EB emplace_back
#define PB push_back

#define endl "\n"
#define S second
#define F first


using namespace std;
using mii = map<int, int>;
using pii = pair<int, int>;

using ll = long long;
using vi = vector<int>;

using vvi = vector<vi>;
using vl = vector<ll>;

const int mod = 1e9+7, mxN = 2e5+5;


inline void Yes(bool e){cout << (e?"Yes\n":"No\n");}inline void yes(bool e){cout << (e?"yes\n":"no\n");}inline void YES(bool e){cout << (e?"YES\n":"NO\n");}
ll mod_pow(ll x, ll y){ll res=1;x%=mod;for(;y>0; y>>=1, x=(x*x)%mod)if(y&1) res=(res*x) % mod; return res; }ll mod_inv ( ll n ){ll ans = mod_pow ( n , mod - 2 ); return ans ;}inline ll mul(ll a, ll b){a%=mod, b%=mod;return (a*b)%mod;}ll sub(ll a,ll b){a%=mod, b%=mod;return (a-b+mod)%mod;}inline ll add(ll a, ll b){a%=mod, b%=mod; return (a+b)%mod;}


template<typename... Args> void print(Args... args) { ((cout << args << " "), ...); cout << endl; }

template<typename T1,typename T2> istream& operator>>(istream& in,pair<T1,T2> &a) { in>>a.F>>a.S;return in; }
template<typename T1,typename T2> ostream& operator<<(ostream& out,pair<T1,T2> a) { out<<a.F<<" "<<a.S;return out; }

template<typename T> istream& operator>>(istream& in,vector<T> &a) { for(auto&x:a)in>>x;return in; }
template<typename T> ostream& operator<<(ostream& out,vector<T> a) { for(auto&x:a)out << x << ' ';return out; }
