#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define pb  push_back
#define all(x) (x).begin(), (x).end()
#define  gcd(a,b)  __gcd(a,b)
#define    lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// Basic a^b 
ll basic_pow(ll a, ll b){
    ll ans=1;
    for(ll i=1; i<=b; i++){
        ans*=a;
    }
    return ans;
}
// recursive------------------------
ll Binary_expo(ll a, ll b){
    if(b==0) return 1;
    if(b&1){
        return a*Binary_expo(a,b-1);
    }
    else{
        ll half=Binary_expo(a,b/2);
        return half*half;
    }
}
// recursive------------------------
ll Binary_expo1(ll a, ll b){
    if(b==0) return 1;
    ll half = Binary_expo1(a,b/2);
    if(b&1) return a*half*half;
    else return half*half;
}

void solve(){
    ll a,b; cin>>a>>b;
    cout<<basic_pow(a,b)<<endl;
    cout<<Binary_expo(a,b)<<endl;
    cout<<Binary_expo1(a,b)<<endl;
}

signed main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}