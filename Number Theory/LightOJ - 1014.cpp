#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    for(ll i = 1; i <= t; i++)
    {
        ll p, l, e;
        cin>>p>>l;
        e = p-l;
        vector<ll>divs;
        for(ll j = 1; j*j<=e; j++)
        {
            if(e%j == 0)
            {
                divs.push_back(j);
                if(j != e/j) divs.push_back(e/j);
            }
        }
        sort(divs.begin(), divs.end());
        cout<<"Case "<<i<<":";
        for(auto x: divs){
            if(x>l){
                cout<<" "<<x;
            }
        }
        if(e<=l){
            cout<<" impossible";
        }
        cout<<endl;
    }
    return 0;
}
