#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool is_divisible(ll a, ll b){
    ll g_cd = __gcd(a,b);
    while(b > 1 && g_cd > 1){
        b = b/g_cd;
        g_cd = __gcd(a,b);
    }
    if(b > 1) return false;
    else return true;

}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++){
        ll a, b, cnt=0;
        cin>>a>>b;
        if(is_divisible(a,b)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
