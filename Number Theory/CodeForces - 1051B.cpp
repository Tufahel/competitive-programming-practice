#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll l, r, m, c=0;
    cin>>l>>r;
    m = (r-l+1)/2;
    vector< pair<ll, ll> > v;
    for(ll i = l; i <= r; i+=2){
        ll g_cd= __gcd(i, i+1);
        if(g_cd == 1){
            v.push_back(make_pair(i, i+1));
            c++;
        }
        if(c==m) break;
    }
    if(c!=m){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(ll i = 0; i < c; i++) cout<<v[i].first<<" "<<v[i].second<<endl;
}
