#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool is_prime(ll n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,res,x,sq;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>x;
        sq = sqrt(x);
        if(sq*sq == x && is_prime(sq) && x!=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
