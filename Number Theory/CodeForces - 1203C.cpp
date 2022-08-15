#include<bits/stdc++.h>
using namespace std;

#define ll long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,t,cnt=0, g_cd = 0;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>n;
        g_cd = __gcd(g_cd, n);
    }

    for(ll i = 1; i*i <= g_cd; i++)
    {
        if(g_cd%i == 0){
            cnt++;
            if(i != g_cd/i) cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
