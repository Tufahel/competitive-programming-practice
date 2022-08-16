#include<bits/stdc++.h>
using namespace std;

#define ll long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t, g_cd, lcm;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        ll a,b;
        cin>>a>>b;
        g_cd = gcd(a,b);
        lcm = (a*b)/g_cd;
        cout<<g_cd<<" "<<lcm<<endl;
    }

    return 0;
}
