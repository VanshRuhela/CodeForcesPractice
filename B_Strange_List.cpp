#include <bits/stdc++.h>  
using namespace std;
typedef long long int ll;
typedef long double ld;
#define P 1000000007
#define rep(i,n) for(int i=0;i<n;++i)
#define re(i,a,n) for(i=a;i<=n;++i)
#define repr(i,a,n) for(i=a;i>=n;--i)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ub(v,val) upper_bound(v.begin(),v.end(),val)
#define np(str) next_permutation(str.begin(),str.end())
#define lb(v,val) lower_bound(v.begin(),v.end(),val)
#define sortv(vec) sort(vec.begin(),vec.end())
#define rev(p) reverse(p.begin(),p.end());
#define mset(a,val) memset(a,val,sizeof(a));
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    int n;
    ll x;
    cin>>n >>x;
    deque <pair<ll, ll>> v;
    ll m;
    rep(i, n){
        cin>>m;
        v.push_back({m, 1});
    }
    ll  s = 0;
    while(!v.empty()){
        pair<ll, ll> p = v.front();
        v.pop_front();
        ll y = p.first, f = p.second;
        s+=y*f;
        if(y%x != 0) break;
        v.push_back({ y/x , x*f });
    }

    while(!v.empty()){
        pair<ll, ll> p = v.front();
        v.pop_front();
        ll y = p.first, f = p.second;
        s+=y*f;
    }
    cout<<s<<ln;
}

int main()
{
    fast_cin();
    int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}