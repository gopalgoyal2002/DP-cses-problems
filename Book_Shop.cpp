#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,p;
    cin>>n>>p;
    vector<int>dp(p+1,0);

    vector<int>price(n),pages(n);
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>pages[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=p;j>0;j--)
        {
            if(j<price[i])
            break;
            dp[j]=max(dp[j],dp[j-price[i]]+pages[i]);
        }
    }
    // for(int i=0;i<=p;i++)
    // cout<<dp[i]<<" ";
    cout<<dp[p];
}