#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll N = 1e8 + 1;
bool f[N];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n = N;
    vector<ll>primes;
    f[1] = true;
    for(ll i = 2; i * i < n; i++){
        if(!f[i]){
            for(ll j = i * i; j < n; j += i){
                f[j] = true;
            }
        }
    }
    for(ll i = 2; i < n; i++){
        if(!f[i]) {
            primes.push_back(i);
        }
    }

    for(ll i = 0; i < primes.size(); i += 100) cout << primes[i] << endl;
    return 0;
}

