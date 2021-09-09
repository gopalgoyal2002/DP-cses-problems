#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    vector<int>dp(sum+1,0);
    for(int i=0;i<n;i++)
    {
        for(int j=sum;j>v[i];j--)
        {
            if(dp[j-v[i]]==1)
            dp[j]=1;
        }
        dp[v[i]]=1;
    }
    vector<int>ans;
    for(int i=1;i<=sum;i++)
    {
        if(dp[i]==1)
      ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    
}