#include<bits/stdc++.h>
using namespace std;

const int N = 122;
int spf[N], spf_cnt[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 2; i <= N; i++) spf[i] = i;
    for(int i = 2; i <= N; i++)
    {
        for(int j = i; j <= N; j += i)
        {
            spf[j] = min(i, spf[j]);
        }
    }
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        int x,n,flag=0;
        cin>>x;
        vector<int>ans;
        for(int j = 2; j <= x; j++)
        {
            n = j;
            while(n>1)
            {
                ans.push_back(spf[n]);
                n /= spf[n];
            }
        }
        for(int j = 2; j <= x; j++) spf_cnt[j] = 0;
        for(int j = 0; j < ans.size(); j++) spf_cnt[ans[j]]++;
        cout<<"Case "<<i<<": "<<x;
        for(int j = 2; j <= x; j++)
        {
            if(spf_cnt[j] != 0 && flag == 0)
            {
                cout<<" = "<<j<<" ("<<spf_cnt[j]<<")";
                flag++;
            }
            else if(spf_cnt[j] != 0 && flag == 1) cout<<" * "<<j<<" ("<<spf_cnt[j]<<")";

        }
        cout<<endl;
    }
    return 0;

}
