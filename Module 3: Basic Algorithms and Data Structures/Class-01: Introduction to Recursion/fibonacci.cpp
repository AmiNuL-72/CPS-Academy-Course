#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define pb  push_back
#define all(x) (x).begin(), (x).end()
#define  gcd(a,b)  __gcd(a,b)
#define    lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// basic fibonacci
ll fibonacci(ll x){
    ll prev1=0,prev2=1;
    if(x<=2) return x-1;
    ll ans=0;
    for(ll i=3; i<=x; i++){
        ans=prev1+prev2;
        prev1=prev2;
        prev2=ans;
    }
    return ans;
}

// recursive
ll fibonacci1(ll x){
    if(x<=2) return x-1;
    return fibonacci1(x-1)+fibonacci1(x-2);
}

//recursive with memorization
vector<ll>dp(1000,-1);
ll fibonacci2(ll x){
    if(x<=2) return x-1;
    if(dp[x]!=-1) return dp[x];
    return dp[x] = fibonacci2(x-1)+fibonacci2(x-2);
}

void solve(){
    ll n; cin>>n;
    cout<<fibonacci(n)<<endl;
    cout<<fibonacci1(n)<<endl;
    cout<<fibonacci2(n)<<endl;
}

signed main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}