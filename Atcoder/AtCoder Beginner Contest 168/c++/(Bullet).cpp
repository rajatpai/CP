#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;
ll power(ll a,ll b){return b?power(a*a%mod,b/2)*(b%2?a:1)%mod:1;}
main(){
    ll n,a,b,ans=1,MOD=mod-1;
    cin>>n;
    map<pair<ll,ll>,pair<ll,ll>>m;
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        if(!a&&!b) MOD++;
        else{
            ll g=__gcd(a,b);
            a/=g,b/=g;
            if(b<0) a=-a,b=-b;
            if(a<=0) m[{b,-a}].second++;
            else m[{a,b}].first++;
        }
    }
    for(auto u:m) ans=ans*(power(2,u.second.first)+power(2,u.second.second)-1+mod)%mod;
    cout<<(ans+MOD)%mod;
}
