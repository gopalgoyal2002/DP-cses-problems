#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    
    

    ll sum=n*(n+1)/2;
   
    if(sum==0)
    {
    cout<< 0;
    exit(0);
    }
    if(sum%2!=0)
    {
    cout<< 0;
    exit(0);

    }
     sum=sum/2;
    ll mod=1e9+7;
    vector<ll>dp(sum+1,0);
    dp[0]=1;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=sum;j>=i;j--)
        {
            dp[j]=dp[j-i]%mod+dp[j]%mod;
        }
    }
    // for(int i=1;i<=sum;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
    cout<<(dp[sum]/2)%mod;
    return 0;
}