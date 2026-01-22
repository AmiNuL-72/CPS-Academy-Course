#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define pb  push_back
#define all(x) (x).begin(), (x).end()
#define  gcd(a,b)  __gcd(a,b)
#define    lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// basic factorial
ll factorial(ll x){
    ll ans=1;
    for(ll i=1; i<=x; i++){
        ans*=i;
    }
    return ans;
}

// recursive
ll factorial1(ll x){
    if(x==1) return 1;
    return x*factorial1(x-1);
}

//recursive with memorization
vector<ll>dp(1000,-1);
ll factorial2(ll x){
    if(x<=1) return 1;
    if(dp[x]!=-1) return dp[x];
    return dp[x] = x*factorial2(x-1);
}

void solve(){
    ll n; cin>>n;
    cout<<factorial(n)<<endl;
    cout<<factorial1(n)<<endl;
    cout<<factorial2(n)<<endl;
}

signed main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}