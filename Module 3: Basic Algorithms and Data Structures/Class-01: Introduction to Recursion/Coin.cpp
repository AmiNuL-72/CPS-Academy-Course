#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define pb  push_back
#define all(x) (x).begin(), (x).end()
#define  gcd(a,b)  __gcd(a,b)
#define    lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll n,target;
const ll mx=10000;
vector<ll>v(mx);
vector<ll>dp(mx,-1);

bool target_coin(ll need){
    if(need==0) return true;
    if(need<0) return false;

    if(dp[need]!=-1) return dp[need];
    //bad diye dekhbo baki needed true dey kina;;
    for(ll i=0; i<n; i++){
        if(target_coin(need-v[i])){
            return dp[need]=1;
        }
    }
    return dp[need]=0;
    
}

void solve(){
    cin>>n>>target;    
    for(ll i=0; i<n; i++){
        cin>>v[i];
        dp[i]=-1;
    }
    // reset dp for needed range
    for(ll i = 0; i <= target; i++){
        dp[i] = -1;
    }
    cout<<target_coin(target);
}

signed main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}

/*----------------------------------------

ll min_coin(ll need){
    if(need == 0) return 0;
    if(need < 0) return INF;

    if(dp[need] != -1) return dp[need];

    ll ans = INF;
    for(ll i = 0; i < n; i++){
        ans = min(ans, 1 + min_coin(need - v[i]));
    }
    return dp[need] = ans;
}

------------------------------------------

ll count_ways(ll need){
    if(need == 0) return 1;
    if(need < 0) return 0;

    if(dp[need] != -1) return dp[need];

    ll ways = 0;
    for(ll i = 0; i < n; i++){
        ways += count_ways(need - v[i]);
    }
    return dp[need] = ways;
}


*/