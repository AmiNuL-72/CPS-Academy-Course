#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define pb  push_back
#define all(x) (x).begin(), (x).end()
#define  gcd(a,b)  __gcd(a,b)
#define    lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// basic last to first print---------
void digitPrint(ll n){
    while(n>0){
        cout<<n%10<<' ';
        n/=10;
    }
}

// basic first to last print;
void digitPrint_(ll n){
    vector<ll>tmp;
    while(n>0){
        //cout<<n%10<<' ';
        tmp.pb(n%10);
        n/=10;
    }
    reverse(all(tmp));
    for(auto u:tmp) cout<<u<<' ';
}
//------------------------------------
// recursive L2F
void recursivePrint(ll n){
    if(n==0) return;
    cout<<n%10<<' ';
    recursivePrint(n/10);
}
// recursive F2L
void recursivePrint2(ll n){
    if(n==0) return;
    recursivePrint2(n/10);
    cout<<n%10<<' ';
}
//--------------------------------------
void solve(){
    ll n; cin>>n;
    digitPrint(n);
    cout<<endl;
    digitPrint_(n);
    cout<<endl;
    recursivePrint(n);
    cout<<endl;
    recursivePrint2(n);
}

signed main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}