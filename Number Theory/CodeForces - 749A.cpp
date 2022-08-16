#include<bits/stdc++.h>
using namespace std;

#define ll long long

void print(int n, int flag){
    cout<<n<<endl;
    for(int i = 1; i <= n-flag; i++){
        if(flag==0 && n==i){
            cout<<2<<endl;
            continue;
        }
        cout<<2<<" ";
    }
    if(flag==1) cout<<3<<endl;
    else cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, flag = 0;
    cin>>n;
    if(n%2==1){
        flag = 1;
    }
    n = n/2;
    print(n, flag);

    return 0;
}
