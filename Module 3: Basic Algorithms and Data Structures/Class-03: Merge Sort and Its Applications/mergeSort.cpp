#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define pb  push_back
#define all(x) (x).begin(), (x).end()
#define  gcd(a,b)  __gcd(a,b)
#define    lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void merge(ll l,ll r,vector<ll>&a){
    ll mid=(l+r)/2;
    vector<ll>t1,t2;
    for(ll i=l; i<=mid; i++) t1.pb(a[i]);
    for(ll i=mid+1; i<=r; i++) t2.pb(a[i]);
    ll L=0,R=0,cur=l;
    while(L<t1.size()&&R<t2.size()){
        if(t1[L]<t2[R]) a[cur++]=t1[L++];
        else a[cur++]=t2[R++];
    }
    while(L<t1.size()) a[cur++]=t1[L++];
    while(R<t2.size()) a[cur++]=t2[R++];
}
void divide(ll l,ll r,vector<ll>&a){
    if(l>=r) return;
    ll mid=(l+r)/2;
    divide(l,mid,a);
    divide(mid+1,r,a);
    merge(l,r,a);
}
void solve(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    divide(0,n-1,v);
    for(ll i=0; i<n; i++){
        cout<<v[i]<<' ';
    }
}

signed main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}